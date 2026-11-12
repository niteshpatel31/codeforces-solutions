#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.sync_with_stdio(false);
  std::string a{}, b{};
  std::cin >> a >> b;
  if (a.size() != b.size()) {
    std::cout << "NO\n";
    return 0;
  }
  std::vector<int> diff{};
  for (size_t i{}; i < a.size(); ++i) {
    if (a[i] != b[i])
      diff.push_back(i);
    if (diff.size() > 2) {
      std::cout << "NO\n";
      return 0;
    }
  }
  if (diff.size() == 2 && a[diff[0]] == b[diff[1]] && a[diff[1]] == b[diff[0]])
    std::cout << "YES\n";
  else
    std::cout << "NO\n";
}
