#include <iostream>

int main(int argc, char const *argv[])
{
    int test{}, num{}, min{1078689760}, pos{}, current{1};
    std::cin >> test;
    while (test--)
    {
        std::cin >> num;
        if (min > num)
        {
            min = num;
            pos = current;
        }
        current++;
    }
    std::cout << min << " " << pos;
    exit(EXIT_SUCCESS);
}