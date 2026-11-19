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
  ll t{}, sum{};
  cin >> t;
  for (ll i{}; sum <= t; ++i) {
    sum += i;
    if (sum == t) {
      cout << "YES";
      return EXIT_SUCCESS;
    }
  }
  cout << "NO";
  return EXIT_SUCCESS;
}
