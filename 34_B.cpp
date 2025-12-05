#include <algorithm>
#include <iostream>
#include <vector>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  ll n = 0, m = 0, tv = 0, profit = 0;
  std::cin >> n >> m;
  std::vector<int> f(n);
  while (n--) {
    std::cin >> tv;
    f.push_back(tv);
  }
  std::sort(f.begin(), f.end());
  for (int i = 0; i < m; i++)
    if (f[i] <= 0)
      profit += f[i];
    else
      break;
  std::cout << profit*-1 << endl;
  exit(EXIT_SUCCESS);
}