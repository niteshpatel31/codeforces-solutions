#include <bits/stdc++.h>
using namespace std;

[[gnu::always_inline]] inline void solve() noexcept {
  size_t size{}, k{};
  std::cin >> size >> k;
  std::vector<int> v(size + 1, 0);
  for (int &x : v)
    std::cin >> x;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  size_t test{};
  std::cin >> test;
  while (test--)
    solve();

  exit(EXIT_SUCCESS);
}
