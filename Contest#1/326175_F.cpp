#include <iostream>
#include <bitset>

int main()
{
    unsigned int a, b;
    std::cin >> a >> b;
    std::string bin_a = std::bitset<32>(a).to_string();
    std::string bin_b = std::bitset<32>(b).to_string();
    std::string bin_bitwise;
    for (u_int8_t i = 0; i < 32; i++)
    {
        if ((bin_a[i] == '1' && bin_b[i] == '1') || (bin_a[i] == '0' && bin_b[i] == '0'))
            bin_bitwise += '0';
        else
            bin_bitwise += '1';
    }
    std::cout << (std::bitset<32>(bin_bitwise).to_ulong());

    return 0;
}