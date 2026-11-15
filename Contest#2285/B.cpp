#include <bits/stdc++.h>

#define YES "YES"
#define NO "NO"
#define ENDL '\n';
using ll = long long;
using ull = unsigned long long;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  ll t{};
  std::cin >> t;
  while (t--) {
    ll n, k;
    std::cin >> n >> k;

    std::string least_diverse2;
    std::cin >> least_diverse2;

    ll z{std::count(least_diverse2.begin(), least_diverse2.end(), '0')};
    ll o{n - z};

    ll flips{std::min(k, std::min(z, o))};

    if (z < o)
      z -= flips, o += flips;
    else
      o -= flips, z += flips;

    std::cout << 1 + z * (z + 1) / 2 + o * (o + 1) / 2 << '\n';
  }

  return EXIT_SUCCESS;
}
