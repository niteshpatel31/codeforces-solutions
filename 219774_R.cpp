#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    unsigned short size;
    std::cin >> size;

    unsigned int a[1000], b[1000], seen[1000] = {0}; // Fixed-size arrays, initialized seen to 0
    bool is_permutation = true;

    // Input array A
    for (int i = 0; i < size; i++)
        std::cin >> a[i];

    // Input array B
    for (int i = 0; i < size; i++)
        std::cin >> b[i];

    // Check if B is a permutation of A
    for (int i = 0; i < size; i++)
    {
        bool found = false;
        for (int j = 0; j < size; j++)
        {
            if (b[i] == a[j] && seen[j] == 0)
            {
                seen[j] = 1; // Mark this element as used
                found = true;
                break;
            }
        }
        if (!found)
        {
            is_permutation = false;
            break;
        }
    }

    // Output result
    std::cout << (is_permutation ? "yes" : "no") << std::endl;

    return 0;
}