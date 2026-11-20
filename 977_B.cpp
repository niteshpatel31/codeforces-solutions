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
  char ch, prev;
  std::cin >> t >> prev;
  --t;
  int grid[26][26]{0};
  while (t--) {
    std::cin >> ch;
    ++grid[prev - 65][ch - 65];
    prev = ch;
  }
  int max{};
  prev = ' ';
  ch = ' ';

  for (size_t i{}; i < 26; ++i) {
    for (size_t j{}; j < 26; ++j) {
      const int &it{grid[i][j]};
      if (it > max) {
        max = it;
        prev = i + 65;
        ch = j + 65;
      }
    }
  }

  std::cout << prev << ch << ENDL;

  return EXIT_SUCCESS;
}
