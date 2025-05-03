#include <iostream>
// Given four numbers A, B, C and D.Print the result of the following equation :
// X = (A * B) - (C * D).

int main(int argc, char const *argv[])
{
    int64_t a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << "Difference = " << ((a * b) - (c * d)) << "\n";
    exit(EXIT_SUCCESS);
}