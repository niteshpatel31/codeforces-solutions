#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned int test, num, max{0};
    std::cin >> test;
    while (test--)
    {
        std::cin >> num;
        if (max < num)
            max = num;
    }
    std::cout << max;
    exit(EXIT_SUCCESS);
}