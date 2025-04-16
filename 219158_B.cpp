#include <iostream>

int main(int argc, char **argv)
{
    int32_t first;
    int64_t second;
    char third;
    float fourth;
    double fifth;
    std::cin >> first >> second >> third >> fourth >> fifth;
    std::cout << first << "\n"
              << second << "\n"
              << (char)third << "\n"
              << fourth << "\n"
              << fifth;
    return EXIT_SUCCESS;
}