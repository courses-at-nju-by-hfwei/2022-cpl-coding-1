// Created by hfwei on 2022/10/6.
//

#include <stdio.h>
#include <stdbool.h>

// function declaration
bool IsLeapYear(int year);

int main() {
  // year: scope (life time)
  // year in the main function: local variable
  int year = 0;
  scanf("%d", &year);

  // year: actual argument (实参)
  bool leap = IsLeapYear(year);

  if (!leap) {
    printf("The year %d is a common year.\n", year);
  } else {
    printf("The year %d is a leap year.\n", year);
  }

  return 0;
}

// year: formal parameter (形式参数)
// scope: same as a local variable
// In C: pass by value (传值)
bool IsLeapYear(int year) {
  return ((year % 4 == 0 && year % 100 != 0) ||
      (year % 400 == 0));
}