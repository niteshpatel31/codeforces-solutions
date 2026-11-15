#include <bits/stdc++.h>
#include <cstdlib>

using ll = long long;
using ull = unsigned long long;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll t{};
  std::cin >> t;

  while (t--) {
    ll n{};
    std::cin >> n;

    if (n < 4) {
      std::cout << -1 << '\n';
      continue;
    }

    for (ll i = 1; i <= n; ++i) {
      if (i > 1)
        std::cout << ' ';

      if (i == 1) {
        std::cout << 4;
      } else if (i == 4) {
        std::cout << 1;
      } else {
        std::cout << i;
      }
    }

    std::cout << '\n';
  }

  return EXIT_SUCCESS;
}
