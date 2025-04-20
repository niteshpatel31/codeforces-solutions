#include <iostream>

void round(short x, short y)
{
    float round = (float)x / y;
    std::cout << "floor " << x << " / " << y << " = " << int(round) << "\n";
    std::cout << "ceil " << x << " / " << y << " = " << int(round) + 1 << "\n";
    std::cout << "round " << x << " / " << y << " = " << ((round - int(round) >= .5f) ? int(round) + 1 : int(round)) << "\n";
    return;
}

int main(int argc, char const *argv[])
{
    short x, y;
    std::cin >> x >> y;
    round(x, y);
    exit(EXIT_SUCCESS);
}