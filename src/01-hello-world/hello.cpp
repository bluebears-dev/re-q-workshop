#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "> "
                  << "lmao"
                  << std::endl;
        exit(1);
    }

    std::cout << argv[1]
              << " lmao"
              << std::endl;
    return 0;
}