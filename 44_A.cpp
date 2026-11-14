#include <bits/stdc++.h>
constexpr char endl{'\n'};

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int32_t count{-1};
  std::unordered_set<std::string> bag{};
  std::string str{};
  while (getline(std::cin, str)) {
    if ((int)str[0] == 0)
      continue;
    if (bag.find(str) == bag.end()) {
      ++count;
      bag.insert(str);
    }
  }
  std::cout << count << endl;
  return EXIT_SUCCESS;
}
