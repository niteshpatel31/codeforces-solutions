#include <bits/stdc++.h>
#include <cstdlib>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl '\n'
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll test{}, num{}, ans{};
  std::cin >> test;
  while (test--) {
    std::cin >> num;
    ans += (ans % 2==0) ? 2 : 3;
  }
  if (ans > 3)
    ans = 3;
  std::cout << ans << endl;

  return EXIT_SUCCESS;
}
