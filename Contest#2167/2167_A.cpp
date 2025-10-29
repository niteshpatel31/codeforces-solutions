#include <iostream>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ull test{0}, a, b, c, d;
  std::cin >> test;
  while (test--) {
    std::cin >> a >> b >> c >> d;
    if (a == b && a == c && a == d)
      std::cout << "YES" << endl;
    else
      std::cout << "NO" << endl;
  }
  exit(EXIT_SUCCESS);
}