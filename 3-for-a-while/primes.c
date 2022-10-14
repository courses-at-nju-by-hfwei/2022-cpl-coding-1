// Created by hfwei on 2022/10/13.
//

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

int main() {
  int max = 0;
  scanf("%d", &max);

  // add code below
  int count = 0;

  for (int number = 2; number <= max; number++) {
    // decide whether number is a prime
    bool is_prime = true;
    for (int i = 2; i * i <= number; i++) {
      if (number % i == 0) {
        is_prime = false;
        break;
      }
    }

    if (is_prime) {
      count++;
      printf("%d ", number);
    }
  }

  printf("\ncount = %d\n", count);

  return 0;
}