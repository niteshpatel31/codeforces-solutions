#include <iostream>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ull n, m;
  bool swt{false};
  std::cin >> n >> m;
  for (ull i = 1; i <= n; i++) {
    for (ull j = 1; j <= m; j++) {
      if (i % 2 != 0 || (swt ? j == 1 : j == m))
        std::cout << '#';
      else
        std::cout << '.';
    }
    if (i % 2 == 0)
      swt = !swt;
    std::cout << endl;
  }

  exit(EXIT_SUCCESS);
}