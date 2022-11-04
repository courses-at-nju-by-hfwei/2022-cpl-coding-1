/**
 * Recursively computing the greatest common divisor of two integers
 *
 * Euclidean algorithm:
 * gcd(a, b) = gcd(b, a % b)
 *
 * Visualization (gcd(64, 48) for illustration):
 *   https://pythontutor.com/c.html#code=int%20GCD%28int%20a,%20int%20b%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20a%20%3D%2064%3B%0A%20%20int%20b%20%3D%2048%3B%0A%0A%20%20printf%28%22gcd%28%25d,%20%25d%29%20%3D%20%25d%5Cn%22,%20a,%20b,%20GCD%28a,%20b%29%29%3B%0A%0A%20%20return%200%3B%0A%7D%0A%0A//%20gcd%28130,%20124%29%20%3D%202%0A//%20gcd%28662,%20414%29%20%3D%202%0Aint%20GCD%28int%20a,%20int%20b%29%20%7B%0A%20%20if%20%28b%20%3D%3D%200%29%20%7B%0A%20%20%20%20return%20a%3B%0A%20%20%7D%0A%0A%20%20return%20GCD%28b,%20a%20%25%20b%29%3B%0A%7D&curInstr=17&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D
 *
 * Created by hengxin on 11/13/21.
 */

#include <stdio.h>

int GCD(int a, int b);

int main() {
  int a = 0;
  int b = 0;
  scanf("%d %d", &a, &b);

  printf("GCD(%d, %d) = %d\n", a, b, GCD(a, b));

  return 0;
}

// gcd(130, 124) = 2
// gcd(414, 662) = 2

int GCD(int a, int b) {
  if (b == 0) {
    return a;
  }

  return GCD(b, a % b);
}