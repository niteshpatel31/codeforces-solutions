#include <bits/stdc++.h>
#include <string>
#include <unordered_set>

#define ull unsigned long long
#define uint unsigned int
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[]) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int test, i, temp;
  std::cin >> test;
  std::string a, b;
  bool ans;

  while (test--) {
    std::cin >> i;
    std::cin >> a >> b;

    ans = true;

    int z[26] = {0};
    for (auto c : a)
      z[c - 97]++;
    for (auto c : b)
      z[c - 97]--;
    for (auto x : z)
      if (x > 0)
        ans = false;
    std::cout << (ans ? "YES" : "NO") << endl;
  }
  exit(EXIT_SUCCESS);
}