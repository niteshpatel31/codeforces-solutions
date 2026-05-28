#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops,fast-math")
#pragma GCC target("avx,avx2,fma,sse4,popcnt,lzcnt,bmi,bmi2")

void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, size_t) noexcept {}
void operator delete[](void *, size_t) noexcept {}

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl "\n"

int main(const int argc, const char *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string s;
  s.reserve(1000);
  std::cin >> s;
  constexpr char right{'>'}, space{' '};
  int height{-2};
  std::string ans;
  ans.reserve(4);
  size_t prev{0};

  const size_t size{s.size()};
  for (size_t i{}; i < size; i++) {
    ans.push_back(s[i]);
    if (s[i] == right) {
      if (ans.size() == 3ul && prev != 4ul)
        height += 2;
      else if ((ans.size() == 4ul && prev == 3ul) ||
               (ans.size() == 3ul && prev == 4ul)) {
      } else
        height -= 2;

      std::cout << std::string(height, space) << ans << endl;
      prev = ans.size();
      ans.clear();
    }
  }
  return EXIT_SUCCESS;
}
