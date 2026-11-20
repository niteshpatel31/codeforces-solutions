#include <bits/stdc++.h>

#define YES "YES"
#define NO "NO"
#define ENDL '\n';
using ll = long long;
using ull = __int128;

void print128(__int128 x) {
  if (x < 0) {
    std::cout << '-';
    x = -x;
  }
  if (x > 9) {
    print128(x / 10);
  }
  std::cout << static_cast<char>('0' + (x % 10));
}
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  ll t{}, n;
  ull n1{}, n2{}, mul{10};
  std::string str;
  std::cin >> t;
  n = t;
  t = (t % 2 == 0 ? t / 2 : t / 2 + 1);
  std::cin >> str;
  for (ll i{}; i < n; ++i) {
    const int d{str[i] - 48};
    if (i < t) {
      n1 *= mul;
      n1 += d;
    } else if (i == t && d == 0) {
      n1 *= mul;
      n1 += d;
    } else {
      n2 *= mul;
      n2 += d;
    }
  }
  print128(n1 + n2);
  return EXIT_SUCCESS;
}
