#include <bits/stdc++.h>

#define YES "YES"
#define NO "NO"
#define DA "DA"
#define NET "NET"
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
    std::stack<char> stack{};
    stack.push(str[0]);
    for (size_t i{1}; i < str.size(); ++i) {
      const char &ch{str[i]};
      if (!stack.empty() && stack.top() != ch)
        stack.pop();
      else
        stack.push(ch);
    }
    std::cout << (((str.size() - stack.size()) / 2) % 2 != 0 ? DA : NET)
              << ENDL;
  }

  return EXIT_SUCCESS;
}
