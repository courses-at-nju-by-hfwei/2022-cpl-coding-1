// Created by hfwei on 2022/10/13.
//

#include <stdio.h>

int main() {
  int number = 0;
  scanf("%d", &number);

  int num_of_digits = 0;

  // add code below
  // while version
//  if (number == 0) {
//    num_of_digits = 1;
//  } else {
//    while (number > 0) {
//      number /= 10;
//      num_of_digits++;
//    }
//  }

  // do-while version
  do {
    number /= 10;
    num_of_digits++;
  } while (number > 0);

  printf("Number of digits is %d.\n", num_of_digits);
}