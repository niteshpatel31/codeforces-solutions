#include <iostream>
unsigned int ans{0};
int counter{0};

int main(int argc, char const *argv[])
{
    unsigned short num;
    unsigned int crt{0}, prev{1}, ans{0};
    std::cin >> num;
    if (num == 1)
        std::cout << crt;
    else
    {
        std::cout << crt << " " << prev;
        for (int i = 0; i < num - 2; i++)
        {
            ans = crt + prev;
            std::cout << " " << ans;
            crt = prev;
            prev = ans;
        }
    }
    exit(EXIT_SUCCESS);
}