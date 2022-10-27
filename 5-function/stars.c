// file: stars.c
// author: hfwei
// date: 2022/10/13
// description: print stars pyramid

#include <stdio.h>

int main() {
  int lines;
  scanf("%d", &lines);

  for (int i = 0; i < lines; i++) {
    // print lines - 1 - i spaces
    for (int j = 0; j < lines - 1 - i; j++) {
      printf(" ");
    }

    // print 2 * i + 1 stars
    for (int j = 0; j < 2 * i + 1; j++) {
      printf("*");
    }

    if (i < lines - 1) {
      printf("\n");
    }
  }

  return 0;
}