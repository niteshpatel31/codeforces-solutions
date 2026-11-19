#include <bits/stdc++.h>
#include <vector>

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
    ull size;
    bool ans{true};
    std::cin >> size;
    std::vector<int> vec(size);
    for (size_t i{}; i < size; ++i)
      std::cin >> vec[i];

    std::sort(vec.begin(), vec.end());

    std::cout << ENDL;
    for (size_t i{1}; i < size; ++i) {
      if (std::abs(vec[i] - vec[i - 1]) > 1) {
        ans = false;
        break;
      }
    }
    std::cout << (ans ? YES : NO) << ENDL;
  }

  return EXIT_SUCCESS;
}
