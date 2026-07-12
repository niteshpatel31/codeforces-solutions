// Binary String Similarity

#include <bits/stdc++.h>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl '\n'
#define space ' '

int main() {
  // std::ios::sync_with_stdio(false);
  // std::cin.tie(nullptr);

  int size{}, test{};
  std::string s;
  std::cin >> test;
  std::cout << test;
  while (test--) {
    std::cin >> size;
    std::cin >> s;
    if (s[0] == '0') {
      s.clear();
      s.push_back('0');

    }
    while (size) {
      s.push_back('1');
      --size;
      if (size)
        s.push_back('0');
      --size;
    }
    std::cout << s << endl;
  }

  return EXIT_SUCCESS;
}
