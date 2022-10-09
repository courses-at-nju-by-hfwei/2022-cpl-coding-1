// Created by hfwei on 2022/10/6.
//

#include <stdio.h>

#define NUM 5

int main() {
  // copy code from `min-array.c` and modify it here
  int numbers[NUM] = {0};

  for (int i = 0; i < NUM; i++) {
    scanf("%d", &numbers[i]);
  }

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