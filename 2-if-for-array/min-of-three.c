// Created by hfwei on 2022/10/6.
//

#include <stdio.h>
int main() {
  int a;
  int b;
  int c;

  scanf("%d%d%d", &a, &b, &c);

  // add code here
  int min;
  if (a > b) {
    if (b > c) {
      min = c;
    } else {
      min = b;
    }
  } else {  // a <= b
    if (a > c) {
      min = c;
    } else {
      min = a;
    }
  }

  printf("min{%d, %d, %d} = %d\n", a, b, c, min);

  return 0;
}