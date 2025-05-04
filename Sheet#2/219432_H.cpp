// #include <bits/stdc++.h>

// #define ll long long int
// bool find_prime(ll num)
// {
//     if (num <= 2)
//         return false;
//     for (int i = 2; i < num / 2; i++)
//     {
//         if (num % i == 0)
//             return false;
//     }
//     return true;
// }

// int main(int argc, char const *argv[])
// {
//     ll x;
//     std::cin >> x;
//     std::cout << ((find_prime(x) ? "YES" : "NO"));
//     exit(EXIT_SUCCESS);
// }
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;
typedef long long int ll;
bool isprime4(ll n)
{ // O( sqrt(n)
    if (n == 2)
        return true;

    if (n < 2 || n % 2 == 0)
        return false;

    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ll p = 0;
    cin >> p;
    std::cout << ((isprime4(p)) ? "YES" : "NO");

    return 0;
}