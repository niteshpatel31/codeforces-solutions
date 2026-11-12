#include <cmath>
#include <iostream>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl "\n"

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll test{};
  std::cin >> test;
  while (test--) {
    float s1{}, s2{}, area{}, n{};
    std::cin >> n;
    s1 = n / 2 ;
    n -= s1;
    s2 = (n) ? n : 1;
    area = (0.5 * s1 * s2) * 2;
    std::cout <<(int) area << endl;
  }

  return EXIT_SUCCESS;
}
