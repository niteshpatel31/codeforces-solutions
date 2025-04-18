#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned short test{};
    std::cin >> test;
    std::string arr[test];
    for (int i = 0; i < test; i++)
        std::cin >> arr[i];
    for (int i = 0; i < test; i++)
    {
        for (size_t i = {i}; i < test; i++)
        {
            /* code */
            std::cout << "inner  : " << i << std::endl;
        }
        std::cout << "outer  : " << i << std::endl;
    }

    exit(EXIT_SUCCESS);
}