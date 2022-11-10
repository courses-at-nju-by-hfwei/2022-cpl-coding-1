//
// Created by hfwei on 2022/11/10.
//

#include <stdio.h>
#include <time.h>

long long Fib(int n);

int main() {
  int n;
  scanf("%d", &n);

  clock_t start = clock();

  printf("Fib(%d) = %lld\n", n, Fib(n));

  clock_t end = clock();
  double time = ((double) end - start) / CLOCKS_PER_SEC;
  printf("time = %f (sec)\n", time);

  return 0;
}

long long Fib(int n) {
  if (n == 0) {
    return 0;
  }

  if (n == 1) {
    return 1;
  }

  return Fib(n - 1) + Fib(n - 2);
}