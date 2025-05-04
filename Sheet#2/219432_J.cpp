#include <iostream>
bool is_prime(unsigned short n)
{

    if (n == 2)

        return true;

    if (n < 2 || n % 2 == 0)

        return false;

    for (unsigned int i = 3; i * i <= n; i += 2)

    {

        if (n % i == 0)

            return false;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    unsigned short num;
    std::cin >> num;
    for (unsigned short i = 1; i <= num; i++)
        if (is_prime(i))
            std::cout << i << " ";
    exit(EXIT_SUCCESS);
}