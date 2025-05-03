#include <iostream>
#include <stdint.h>

#include <iostream>

// Custom natural logarithm function
long double log(long double x)
{
    if (x <= 0)
        return -1.0; // Invalid input (undefined for x <= 0)

    // Reduce x to m * 2^k, where 1 <= m < 2
    int k = 0;
    while (x >= 2.0)
    {
        x /= 2.0;
        k++;
    }
    while (x < 1.0)
    {
        x *= 2.0;
        k--;
    }

    // Now x is in [1, 2), compute ln(x) using Taylor series for ln(1 + z) where z = x - 1
    long double z = x - 1.0;
    long double term = z;
    long double sum = term;
    const int max_iterations = 100; // Enough for convergence
    for (int n = 2; n <= max_iterations; ++n)
    {
        term *= -z * (n - 1) / n; // Next term: (-1)^(n-1) * z^n / n
        sum += term;
        if (std::abs(term) < 1e-15)
            break; // Stop if term is small
    }

    // ln(x) = sum + k * ln(2)
    const long double ln2 = 0.693147180559945309417;
    return sum + k * ln2;
}

// Modified pow function using log
bool pow(long double a, long double b, long double c, long double d)
{
    // Check for invalid inputs
    if (a <= 0 || c <= 0)
        return false; // Log undefined for non-positive inputs
    return b * log(a) > d * log(c);
}

int main()
{
    long double a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << (pow(a, b, c, d) ? "YES" : "NO") << std::endl;
    return 0;
}

// bool pow(unsigned long long a, unsigned long long b, unsigned long long c, unsigned long long d)
// {
//     unsigned long long power_a{1}, power_b{1};
//     if (b > d)
//     {
//         auto buffer = d;
//         d = b;
//         b = buffer;
//     }
//     for (int i = 1; i <= d; i++)
//     {
//         // std::cout << "ran " << i << "th times\n";
//         if (i <= b)
//             power_a *= a;
//         if (i <= d)
//             power_b *= c;
//     }
//     // std::cout << "a : " << power_a << "\tb : " << power_b << "\n";
//     return bool(power_a > power_b);
// }

// int main(int argc, char const *argv[])
// {
//     unsigned long long a, b, c, d;
//     std::cin >> a >> b >> c >> d;
//     std::cout << ((pow(a, b, c, d)) ? "YES" : "NO");
//     exit(EXIT_SUCCESS);
// }