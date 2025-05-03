#include <iostream>

int main(int argc, char const *argv[])
{
    float num;
    std::cin >> num;
    if (((int)num) == (num))
    {
        std::cout << "int " << (int)num << "\n";
        exit(EXIT_SUCCESS);
    }
    std::cout << "float " << (int)num << " " << float(num - (int)num) << "\n"; // show separate int and float part
    exit(EXIT_SUCCESS);
}