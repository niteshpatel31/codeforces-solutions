#include <bits/stdc++.h>

alignas(64) std::array<uint32_t, 78498> PRIMES{};

inline void fillPrime() noexcept {
  PRIMES[0] = 2;
  PRIMES[1] = 3;
  size_t count = 2;

  for (uint32_t n = 5, step = 2; count < 78498; n += step, step = 6 - step) {
    bool is_prime = true;
    // i < count prevents reading uninitialized 0s and dividing by zero
    for (size_t i = 2; i < count && PRIMES[i] * PRIMES[i] <= n; ++i) {
      if (n % PRIMES[i] == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime) {
      PRIMES[count++] = n;
    }
  }
}

[[gnu::always_inline]] inline bool isTPrime(uint64_t n) noexcept {
  if (n < 4) [[unlikely]]
    return false;

  uint64_t root = static_cast<uint64_t>(std::sqrt(n));
  // Guard against floating-point precision drift on large integers
  while (root * root > n)
    --root;
  while ((root + 1) * (root + 1) <= n)
    ++root;

  if (root * root != n) [[likely]] {
    return false;
  }
  return std::binary_search(PRIMES.begin(), PRIMES.end(),
                            static_cast<uint32_t>(root));
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  fillPrime();

  uint64_t test{};
  if (!(std::cin >> test))
    return 0;

  while (test--) {
    uint64_t n{};
    std::cin >> n;
    std::cout << (isTPrime(n) ? "YES\n" : "NO\n");
  }
  return 0;
}
