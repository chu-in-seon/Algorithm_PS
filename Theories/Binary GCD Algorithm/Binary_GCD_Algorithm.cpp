// Binary GCD algorithm
#include <algorithm>
#include <cstdlib>
#include <cstdint>

// compute the greatest common divisor of two positive integers
// using the binary GCD algorithm (Stein's algorithm)
int64_t binary_gcd(int64_t a, int64_t b) {
  // if either number is zero, return the other number as the GCD
  if (a == 0) return b;
  if (b == 0) return a;

  // count the number of common factors of 2 for a and b
  int shift = 0;
  while (((a | b) & 1) == 0) {
    a >>= 1;
    b >>= 1;
    shift++;
  }

  // divide a by 2 until it is odd
  while ((a & 1) == 0) {
    a >>= 1;
  }

  // repeatedly apply the following steps until a and b are equal:
  // - if b is even, divide it by 2
  // - if a and b are odd, set b to the absolute difference between them
  // - if a is even, divide it by 2
  while (b != a) {
    // if b is even, divide it by 2
    while ((b & 1) == 0) {
      b >>= 1;
    }

    // if a and b are odd, set b to the absolute difference between them
    if (a > b) {
      std::swap(a, b);
    }
    b -= a;

    // if a is even, divide it by 2
    while ((a & 1) == 0) {
      a >>= 1;
    }
  }

  // return the GCD, which is a * 2^shift
  return a << shift;
}
