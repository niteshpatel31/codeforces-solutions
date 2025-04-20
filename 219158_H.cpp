#include <iostream>

void round(long x, long y)
{
    float round = (float)x / y;
    std::cout << "floor " << x << " / " << y << " = " << int(round) << "\n";
    std::cout << "ceil " << x << " / " << y << " = " << ((round == 1.0f) ? int(round) : int(round) + 1) << "\n";
    std::cout << "round " << x << " / " << y << " = " << ((round - int(round) >= .5f) ? int(round) + 1 : int(round)) << "\n";
    return;
}

int main(int argc, char const *argv[])
{
    long x, y;
    std::cin >> x >> y;
    round(x, y);
    exit(EXIT_SUCCESS);
}