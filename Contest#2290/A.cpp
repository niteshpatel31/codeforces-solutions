#include <bits/stdc++.h>

constexpr char ENDL{'\n'};
#define YES "YES"
#define NO "NO"

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int test{}, a{}, b{}, c{};
  std::cin >> test;
  while (test--) {
    std::cin >> a >> b >> c;
    std::cout << (std::abs(a - b) == 1 && std::abs(b - c) == 1 ? YES : NO)
              << ENDL;
  }
  return EXIT_SUCCESS;
}
