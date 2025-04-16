#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned short x;
    while (true)
    {
        std::cin >> x;
        if (x == 1999)
        {
            std::cout << "Correct\n";
            break;
        }
        std::cout << "Wrong\n";
    }
    exit(EXIT_SUCCESS);
}