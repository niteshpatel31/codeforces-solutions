#include <iostream>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll test{0}, size{0};
  char c, prev = '*';
  std::string s;
  std::cin >> test;
  while (test--) {
    std::cin >> s;
    size = (s.size());
    prev = '*';
    bool ans = false;
    for (auto ch : s) {
      if (prev == ch)
        ans = true;
      prev = ch;
    }
    std::cout << (ans ? 1 : size) << endl;
  }
  exit(EXIT_SUCCESS);
}