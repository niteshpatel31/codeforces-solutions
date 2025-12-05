#include <array>
#include <iostream>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl "\n"

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ull test;
  std::cin >> test;
  ll size, k, odd, even;
  bool is_odd, ans;
  std::array<int, 26> f = {0};

  while (test--) {
    ans = false;
    odd = 0;
    even = 0;
    f.fill(0);
    std::cin >> size >> k;
    std::string s('0', size);
    std::cin >> s;
    for (auto v : s) {
      f[v - 97]++;
    }
    for (auto x : f) {
      (x % 2 == 0) ? even++ : odd++;
    }
    is_odd = (size - k % 2 == 0) ? true : false;
    if (!is_odd) {
      if (odd == 1)
        ans = true;
      else
        ans = false;
    } else {
      if (odd >= 1)
        ans = false;
      else
        ans = true;
    }
    std::cout << (ans ? "YES" : "NO") << endl;
  }
  exit(EXIT_SUCCESS);
}