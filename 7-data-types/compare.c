/**
 * file: compare.c
 *
 * See https://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/
 *
 * Created by hfwei on 2022/11/10.
 */

#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>

bool IsEqual(double x, double y);

int main() {
  printf("%d\n", IsEqual(DBL_MAX, DBL_MAX - 100));

  printf("%.50f\n", DBL_MAX - (DBL_MAX - 100));

  return 0;
}

bool IsEqual(double x, double y) {
  return fabs(x - y) <= DBL_EPSILON;
}