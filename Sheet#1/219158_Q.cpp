#include <iostream>

int main(int argc, char **argv)
{
    float x, y;
    std::cin >> x >> y;
    if (x > 0 && y > 0)
    {
        std::cout << "Q1";
    }
    else if (x < 0 && y > 0)
    {
        std::cout << "Q2";
    }
    else if (x < 0 && y < 0)
    {
        std::cout << "Q3";
    }
    else if (x > 0 && y < 0)
    {
        std::cout << "Q4";
    }
    else if (x != 0.0f && y == 0)
    {
        std::cout << "Eixo X";
    }
    else if (x == 0 && y != 0.0f)
    {
        std::cout << "Eixo Y";
    }
    else
    {
        std::cout << "Origem";
    }
    exit(EXIT_SUCCESS);
}