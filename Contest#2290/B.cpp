#include <bits/stdc++.h>

constexpr char ENDL{'\n'};
#define YES "YES"
#define NO "NO"

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int test{};
  std::cin >> test;
  while (test--) {
    int i{1}, n{}, cnt{};
    std::cin >> n;
    char ch{}, start{};
    --n;
    std::cin >> start;
    while (i++ <= n) {
      std::cin >> ch;
      std::cout << ch;
      if ((i % 2 == 0 && ch != start) || (i % 2 != 0 && ch == start))
        ++cnt;
    }

    std::cout << cnt << ENDL;
  }
  return EXIT_SUCCESS;
}
