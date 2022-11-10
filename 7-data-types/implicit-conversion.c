//
// Created by hfwei on 2022/11/10.
//

#include <limits.h>
#include <stdio.h>

int SquareInt(int num);
double SquareDouble(double num);

int main() {
  // then i = 3; narrowing conversion (still in the range)
  int i = 3.14159;

  // narrowing conversion
  int square_int = SquareInt(3.14);
  printf("SquareInt(3.14) = %d\n", square_int);

  // narrowing conversion
  int square_double = SquareDouble(3.14);
  printf("SquareDouble(3.14) = %d\n", square_double);

  // out of the range: undefined behavior!!!
  int j = UINT_MAX;
  printf("j = UINT_MAX = %d\n", j);

  return 0;
}

int SquareInt(int num) {
  return num * num;
}

double SquareDouble(double num) {
  return num * num;
}