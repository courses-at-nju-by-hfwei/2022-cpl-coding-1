//
// Created by hfwei on 2022/11/10.
//

#include <stdio.h>
#include <limits.h>

int main() {
  double pi = 3.14159;

  // below: obtain its fractional part
  double fraction = pi - (int) pi;

  int num = 1000000000;
  printf("LLONG_MAX = %lld\n", LLONG_MAX);
  // long long llint = num * num;
  // long long llint = (long long) num * num;
  long long llint = (long long) (num * num);

  printf("llint = %lld\n", llint);

  return 0;
}