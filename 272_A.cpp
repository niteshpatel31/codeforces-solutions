
#include <bits/stdc++.h>

#define YES "YES"
#define NO "NO"
#define END '\n'
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, f, tf{};
  std::cin >> n;
  for (int i{}; i < n; ++i) {
    cin >> f;
    tf += f;
  }
  f = 0;
  ++n;
  for (int i{1}; i <= 5; ++i)
    f += (++tf % n == 1) ? 0 : 1;
  cout << f;

  return EXIT_SUCCESS;
}
