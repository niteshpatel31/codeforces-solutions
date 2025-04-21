#include <iostream>

// Function to check if binary representation is palindrome
bool is_bin_palindrome(int num)
{
    // Convert to binary string
    std::string binary = "";
    while (num > 0)
    {
        binary = std::to_string(num % 2) + binary;
        num /= 2;
    }

    // Check if palindrome
    int left = 0;
    int right = binary.length() - 1;

    while (left < right)
    {
        if (binary[left] != binary[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool is_odd(unsigned int num)
{
    if (num % 2 != 0)
        return true;
    return false;
}

int main(int argc, char const *argv[])
{
    unsigned int num;
    std::cin >> num;
    (is_odd(num) && is_bin_palindrome(num)) ? std::cout << "YES" : std::cout << "NO";
    exit(EXIT_SUCCESS);
}