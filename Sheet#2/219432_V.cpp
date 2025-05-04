#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned short num, lines{0};
    std::cin >> num;
    for (int i = 1; lines < num; i++)
    {
        if (i % 4 == 0)
        {
            std::cout << "PUM\n";
            lines++;
        }
        else
            std::cout << i << " ";
    }
    exit(EXIT_SUCCESS);
}