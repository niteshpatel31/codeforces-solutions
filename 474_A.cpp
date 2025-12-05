#include <iostream>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  char test;
  std::string layout = "qwertyuiopasdfghjkl;zxcvbnm,./";
  std::cin >> test;
  std::string s;
  std::cin >> s;
  for (auto c : s) {
    if (test == 'L')
      std::cout << (layout[layout.find(c) + 1]);
    else
      std::cout << (layout[layout.find(c) - 1]);
  }

  exit(EXIT_SUCCESS);
}