

#include <math.h>

unsigned long long square_digits(unsigned n) {
  unsigned long long nn = 0;
  unsigned long long pow10 = 1;

  while (n) {
    unsigned digit = n % 10;
    unsigned square = digit * digit;  // 0 to 81
    nn += square * pow10;
    if (square < 10) {
      pow10 *= 10;
    } else {
      pow10 *= 100;
    }
    n /= 10;
  }
  return nn;
}
