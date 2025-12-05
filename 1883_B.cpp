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
  ll n, k, odd, even;
  char buffer;
  bool ans;
  std::cin >> test;
  while (test--) {
    std::cin >> n >> k;
    ll size = n;
    odd = even = 0;
    std::array<int, 26> f;
    f.fill(0);
    while (size--) {
      std::cin >> buffer;
      f[buffer - 97]++;
    }
    for (int x : f)
      (x % 2 != 0) ? odd++ : even++;
    if ((n - k) % 2 == 0)
      ans = ((k % odd) % 2 == 0) ? false : true;
    else
      ans = (k > 0 && odd > 0) ? ((k % odd) == 1) ? true : false : false;
    std::cout << (ans ? "YES" : "NO") << endl;
  }

  exit(EXIT_SUCCESS);
}
// ull test;
// std::cin >> test;
// ll size, k, odd, even;
// bool is_odd, ans;
// std::array<int, 26> f = {0};

// while (test--) {
//   ans = false;
//   odd = 0;
//   even = 0;
//   f.fill(0);
//   std::cin >> size >> k;
//   std::string s('0', size);
//   std::cin >> s;
//   for (auto v : s) {
//     f[v - 97]++;
//   }
//   for (auto x : f) {
//     (x % 2 == 0) ? even++ : odd++;
//   }
//   is_odd = (size - k % 2 == 0) ? true : false;
//   if (!is_odd) {
//     if (odd == 1)
//       ans = true;
//     else
//       ans = false;
//   } else {
//     if (odd >= 1)
//       ans = false;
//     else
//       ans = true;
//   }
//   std::cout << (ans ? "YES" : "NO") << endl;
// }
