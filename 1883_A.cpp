#include <iostream>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ull test;
  ll counter, ans;
  char digit;
  std::cin >> test;
  while (test--) {
    counter = 1;
    ans = 0;
    for (int i = 0; i < 4; i++) {
      std::cin >> digit;
      digit -= 48;
      digit = (digit == 0) ? 10 : digit;
      ans += (digit >= counter) ? digit - counter : counter - digit;
      counter = (digit == 0) ? 10 : digit;
    }
    std::cout << ans + 4 << endl;
  }
  exit(EXIT_SUCCESS);
}