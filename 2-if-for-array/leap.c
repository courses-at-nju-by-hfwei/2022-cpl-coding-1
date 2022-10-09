// Created by hfwei on 2022/10/6.
//

#include <stdio.h>

int main() {
  int year = 0;
  scanf("%d", &year);

  // copy code from `leap-elseif.c` add modify it here
  int leap =
      ((year % 4 == 0 && year % 100 != 0) ||
      (year % 400 == 0));

  if (leap == 0) {
    printf("The year %d is a common year.\n", year);
  } else {
    printf("The year %d is a leap year.\n", year);
  }

  if (leap != 0) {

  }

  return 0;
}