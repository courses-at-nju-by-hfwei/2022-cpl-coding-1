// Created by hfwei on 2022/10/6.
//

#include <stdio.h>

int main() {
  int year = 0;
  scanf("%d", &year);

  // copy code from `leap-else-if.c` and modify it here
  int leap = 0;

  if (year % 4 != 0) {
    leap = 0;
  } else if (year % 100 != 0) {
    leap = 1;
  } else if (year % 400 != 0) {
    leap = 0;
  } else {
    leap = 1;
  }

  if (leap == 0) {
    printf("The year %d is a common year.\n", year);
  } else {
    printf("The year %d is a leap year.\n", year);
  }

  return 0;
}