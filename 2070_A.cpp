#include <bits/stdc++.h>

#define YES "YES"
#define NO "NO"
#define ENDL '\n';
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  ll t{};
  std::cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    ll d{(n - 3) / 15 + ((n - 3) % 15 ? 1 : 0)}, ans{d * 3};
    if (d * 15 + 2 <= n)
      ++ans;
    if (d * 15 + 1 <= n)
      ++ans;
    if (d * 15 <= n)
      ++ans;
    std::cout << (n < 3 ? n + 1 : ans) << ENDL;
  }

  return EXIT_SUCCESS;
}
