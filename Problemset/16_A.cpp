#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull row{0}, col{0};
    char m_col{0}, m_row{0}, c_prev{0}, buffer{0};
    std::cin >> row >> col;
    for (ull i = 0; i < row; i++)
    {
        for (ull j = 0; j < col; j++)
        {
            std::cin >> buffer;
            if (j == 0)
            {
                c_prev = buffer;
                m_row = buffer;
            }
            // std::cout << c_prev << " : " << buffer << endl;
            if (c_prev != buffer || (m_col == m_row && i >= 1))
            {
                std::cout << "NO";
                exit(EXIT_SUCCESS);
            }
        }
        m_col = c_prev;
    }
    std::cout << "YES";
    exit(EXIT_SUCCESS);
}