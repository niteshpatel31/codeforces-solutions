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
    std::string str;
    std::cin >> str;
    bool s{false};
    bool ans{true};
    for (const char ch : str) {
      if (s && ch == '(') {
        ans = false;
        break;
      }
      if (ch == ')')
        s = true;
    }
    std::cout << (ans && str.size() % 2 == 0 ? NO : YES) << ENDL;
  }

  return EXIT_SUCCESS;
}
