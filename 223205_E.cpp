#include <iostream>

void swap(int &x, int &y)
{
    int buffer = x;
    x = y;
    y = buffer;
    return;
}

int main(int argc, char const *argv[])
{
    int x, y;
    std::cin >> x >> y;
    swap(x, y);
    std::cout << x << " " << y;
    exit(EXIT_SUCCESS);
}