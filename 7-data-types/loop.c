/**
 * file: loop.c
 *
 * Created by hengxin on 11/21/21.
 */

#include <stdio.h>

int main() {
  /**
   * Do not use a counter of type float/double,
   * although it works on some platforms.
   *
   * 0.1 cannot be exactly represented in machines.
   */
  for (double x = 0.1; x <= 1.0; x += 0.1) {
    printf("%.20f\n", x);
  }

  return 0;
}