//
// Created by hfwei on 2022/11/10.
//

#include <limits.h>
#include <stdio.h>

int SquareInt(int num);
double SquareDouble(double num);

int main() {
  // narrowing conversion (still in the range)

  // out of the range: undefined behavior!!!

  // arguments; narrowing conversion

  // return value; narrowing conversion

  return 0;
}

int SquareInt(int num) {
  return num * num;
}

double SquareDouble(double num) {
  return num * num;
}