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
  int arr[26]{0};
  char c;
  while (t--) {
    std::cin >> c;
    ++arr[c - 'a'];
  }

  for (size_t i{0}; i < 26; ++i)
    if (arr[i])
      while (arr[i] > 0) {
        --arr[i];
        std::cout << char(i + 'a');
      }
  return EXIT_SUCCESS;
}
