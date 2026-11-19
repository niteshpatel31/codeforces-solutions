#include <bits/stdc++.h>

#define YES "YES"
#define NO "NO"
#define ENDL '\n';
using ll = long long;
using ull = unsigned long long;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  ll t{}, s{};
  std::cin >> s >> t;
  std::vector<std::pair<int, int>> map;
  map.reserve(t);
  while (t--) {
    ll x{}, y{};
    std::cin >> x >> y;
    map.push_back({x, y});
  }
  std::sort(map.begin(), map.end());
  for (auto &x : map) {
    if (s > x.first)
      s += x.second;
    else {
      std::cout << NO;
      return EXIT_SUCCESS;
    }
  }
  std::cout << YES;
  return EXIT_SUCCESS;
}
