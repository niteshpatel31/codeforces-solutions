#include <algorithm>
#include <iostream>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl "\n"
#define space ' '

int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ull test, num, counter_1{0}, counter_2{0}, counter_3{0}, idx{1};
  std::cin >> test;
  ull one[test], two[test], three[test];
  while (test--) {
    std::cin >> num;
    if (num == 1)
      one[counter_1++] = idx;
    else if (num == 2)
      two[counter_2++] = idx;
    else
      three[counter_3++] = idx;
    idx++;
  }
  size_t loop = std::min(std::min(counter_1, counter_2), counter_3);
  counter_1 = 0, counter_2 = 0, counter_3 = 0;
  loop;
  std::cout << loop << endl;
  while (loop--) {
    std::cout << one[counter_1++] << space << two[counter_2++] << space
              << three[counter_3++] << endl;
  }
  exit(EXIT_SUCCESS);
}