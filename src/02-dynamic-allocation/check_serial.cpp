#include <algorithm>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <random>

auto DEBUG = false;

inline void debug_msg(const char *msg) {
  if (DEBUG) {
    std::cout << msg << std::endl;
  }
}

inline void generate_secret(char *dest, size_t buffer_length, uint64_t seed) {
  auto start = 'A';

  std::mt19937 gen(seed);
  std::uniform_int_distribution<> distribution(0, 25);

  auto buf = new char *[buffer_length];

  for (uint64_t i = 0; i < buffer_length; i++) {
    buf[i] = new char[buffer_length];
  }

  for (uint64_t i = 0; i < buffer_length; i++) {
    for (uint64_t j = 0; j < buffer_length; j++) {
      if (i == 0) {
        buf[i][j] = start + distribution(gen);
      } else {
        buf[i][j] = start + (buf[i - 1][j] + i + j) % 25;
      }
    }
  }

  buf[buffer_length - 1][buffer_length / 3] = '-';
  buf[buffer_length - 1][2 * buffer_length / 3] = '-';

  strncpy(dest, buf[buffer_length - 1], buffer_length);
  std::cout << dest << std::endl;

  delete[] buf;
}

int main(int argc, char *argv[]) {
  char user_input[65];
  size_t index = 1;

  // Intentional bug here
  if (argc == 2) {
    return 1;
  }

  if (argc > 3 && strcmp(argv[1], "--verboseee") == 0) {
    DEBUG = true;
    index++;
  }

  auto input_len = std::max(std::min(strlen(argv[index]), 64ul), 32ul);
  memcpy(user_input, argv[index], input_len);

  uint64_t license_seed = atoi(argv[index + 1]);

  auto buffer = new char[input_len];

  if (strcmp(buffer, user_input) == 0) {
    std::cout << "n"
              << "o"
              << "ic"
              << "e"
              << " "
              << "yo"
              << "u w"
              << "in" << std::endl;
  }

  delete[] buffer;

  return 0;
}