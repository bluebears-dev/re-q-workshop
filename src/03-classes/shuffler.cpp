#include <algorithm>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <random>
#include <ranges>
#include <string>
#include <string_view>
#include <unordered_set>

#define _STRING(s) #s
#define STRING(s) _STRING(s)

struct Shuffler {
  size_t seed;

  Shuffler(size_t seed) : seed(seed) {}

  std::string shuffle(const std::string &input) {
    std::string cloned(input);
    std::random_shuffle(cloned.begin(), cloned.end());

    return cloned;
  }

  bool guessing_loop(std::string &input, uint8_t max_tries) {
    std::string user_guess;
    auto secret = this->shuffle(input);

    for (auto i = 0; i < max_tries; i++) {
      std::cin >> user_guess;

      if (user_guess == secret) {
        return true;
      }
      std::cout << "> lm"
                << "ao" << std::endl;
    }
    return false;
  }
};

void finish() {
  std::cout << "> "
            << "ge"
            << "t "
            << "re"
            << "kt" << std::endl;
}

bool check_if_most_chars_unique(std::string &input) {
  std::unordered_set<char> charset(input.begin(), input.end());

  return (charset.size() >= 0.8 * input.size());
}

int main(int argc, char *argv[]) {
  if (argc < 3) {
    return 1;
  }

  auto input = std::string(argv[1]);

  if (input.size() < 8) {
    std::cout << "> l"
              << "ol y"
              << "ou t"
              << "hin"
              << "k t"
              << "his w"
              << "ill"
              << "be t"
              << "hat"
              << "ea"
              << "sy?" << std::endl;
    return 3;
  }

  if (!check_if_most_chars_unique(input)) {
    std::cout << "> "
              << "lo"
              << "l re"
              << "pe"
              << "at"
              << "i"
              << "ng"
              << " "
              << "cha"
              << "ra"
              << "ct"
              << "er"
              << "s.."
              << "."
              << " rea "
              << "ll"
              << "y?" << std::endl;
    return 3;
  }

  uint64_t seed = atoi(argv[2]);

  std::cout << "> tr"
            << "y"
            << " to"
            << " gue"
            << "ss h"
            << "ow I"
            << " shu"
            << "ffl"
            << "ed it"
            << "!" << std::endl;
  auto max_tries = 3;

  auto shuffler = Shuffler(seed);

  if (shuffler.guessing_loop(input, max_tries)) {
    std::cout << ">"
              << "D"
              << "am"
              << "n"
              << " yo"
              << "u ";
    std::cout << "go"
              << "od"
              << "!" << std::endl;
    return 0;
  }

  finish();

  return 2;
}