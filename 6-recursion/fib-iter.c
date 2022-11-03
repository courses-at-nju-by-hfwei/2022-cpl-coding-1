#include <stdio.h>
/**
 * file: fib-iter.c
 *
 * Iteratively computing the first n Fibonacci numbers without using an array.
 *
 * Created by hengxin on 11/13/21.
*/

int main() {
  int n;
  scanf("%d", &n);

  long long fib1 = 0;
  long long fib2 = 1;
  printf("%lld %lld ", fib1, fib2);

  return 0;
}