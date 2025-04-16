#include <iostream>

int main(int argc, char const *argv[])
{
    double num;
    std::cin >> num;
    if (num <= 25.000000f && num >= 0.00000f)
        std::cout << "Interval [0,25]\n";
    else if (num >= 25.000001 && num <= 50.00000f)
        std::cout << "Interval (25,50]\n";
    else if (num >= 50.00001f && num <= 75.00000f)
        std::cout << "Interval (50,75]\n";
    else if (num <= 100.000000f && num >= 75.00001f)
        std::cout << "Interval (75,100]\n";
    else
        std::cout << "Out of Intervals\n";
    exit(EXIT_SUCCESS);
}