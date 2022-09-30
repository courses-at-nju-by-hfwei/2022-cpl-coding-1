//
// Created by hengxin on 9/30/22.
//

#include <stdio.h>
int main() {
  // const: constant
  const double PI = 3.14159;
  int radius = 10;

  double circumference = 2 * PI * radius;
  double area = PI * radius * radius;

  printf("circumference = %.2f\narea = %.2f\n",
         circumference, area);

  return 0;
}