// #include <iostream>

// void print_palindrome(unsigned int num)
// {
//     unsigned int temp{10}, buffer;
//     while (num % (temp / 10) != num)
//     {
//         buffer = num % temp;
//         if (buffer == 0)
//             std::cout << "0B";
//         std::cout << buffer / (temp / 10) << " ";
//         temp *= 10;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     unsigned short test;
//     std::cin >> test;

//     while (test--)
//     {
//         unsigned int num;
//         std::cin >> num;
//         print_digits(num);
//         std::cout << "\n";
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int n;
        scanf("%lld", &n);

        do
        {
            printf("%d ", n % 10);
            n /= 10;
        } while (n != 0);
        printf("\n");
    }

    return 0;
}
