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

  ll test, num, sum{0}, max{0};
  std::cin >> test;
  std::vector<ll> v;
  v.reserve(test);
  while (test--) {
    std::cin >> num;
    max = (num <= max ? max : num);
    v.push_back(num);
  }
  for (auto n : v)
    sum += max - n;

  std::cout << sum;
  exit(EXIT_SUCCESS);
}