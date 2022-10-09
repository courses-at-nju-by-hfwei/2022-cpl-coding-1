// Created by hfwei on 2022/10/6.
//

#include <stdio.h>

int main() {
  const int NUM = 5;
  int numbers[NUM] = {23, 56, 19, 11, 78};

  int min = numbers[0];
  // (1) []: subscript operator
  // (2) i < NUM: not i <= NUM
  // (3) i++: ++i
  // (4) int i = 1; >= C99
  for (int i = 1; i < NUM; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    }
  }

  printf("min: %d\n", min);

  return 0;
}