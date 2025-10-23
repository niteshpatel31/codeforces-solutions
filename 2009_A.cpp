#include <iostream>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl "\n"

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ull test, a, b;
  std::cin >> test;
  while (test--) {
    std::cin >> a >> b;
    if (a < b)
      std::cout << b - a << endl;
    else
      std::cout << a - b << endl;
  }

  exit(EXIT_SUCCESS);
}