#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // find the longest non-decreasing subsequuence
    ull test{0}, ss{0}, max_ss{0}, num{0}, prev{0}; // ss : sub_sequence
    std::cin >> test;
    while (test--)
    {
        std::cin >> num;
        // std::cout << num << " : " << prev << " { " << std::boolalpha << (prev <= num) << " }\t" << " => " << ss << " : " << max_ss << endl;
        if (prev <= num)
            ++ss;
        else
            ss = 1;
        max_ss = (ss > max_ss) ? ss : max_ss;
        prev = num;
    }
    std::cout << max_ss;
    exit(EXIT_SUCCESS);
}