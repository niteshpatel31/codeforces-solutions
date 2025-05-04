#include <iostream>

/*
    Convert To Decimal 2

    *Convert N to its binary representation.
    *Count number of ones in the above binary representation.
    *Print the equivalent decimal number that its binary representation has only the number of ones that were counted above.

*/

int num_of_ones(std::string arr)
{
    unsigned short count{0};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == '1')
            count++;
        else
            continue;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    unsigned int test{}, num{};
    std::cin >> test;
    while (test--)
    {
        std::cin >> num;
        std::string arr{};
        while (true)
        {
            std::cout << num;
            arr += std::to_string(num % 2);
            num /= 2;
            if (num / 2 == 0)
            {
                arr += "1";
                break;
            }
            std::cout << "  : " << arr << "\n";
        }
    }

    exit(EXIT_SUCCESS);
}