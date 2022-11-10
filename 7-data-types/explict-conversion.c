//
// Created by hfwei on 2022/11/10.
//

#include <stdio.h>
#include <limits.h>
int main() {
  double pi = 3.14159;

  double pi_frac = pi - (int) pi;
  printf("The fractional part of pi is %f.\n", pi_frac);

  int num = 1000000000;
  printf("LLONG_MAX = %lld\n", LLONG_MAX);
  // long long llint = num * num;
  long long llint = (long long) num * num;
  printf("i = %lld\n", llint);

  return 0;
}