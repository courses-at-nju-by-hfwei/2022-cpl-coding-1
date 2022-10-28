// file: stars.c
// author: hfwei
// date: 2022/10/13
// description: print stars pyramid

#include <stdio.h>

// void: return no values
void Print(char ch, int count);

int main() {
  int lines;
  scanf("%d", &lines);

  for (int i = 0; i < lines; i++) {
    Print(' ', lines - 1 - i);
    Print('*', 2 * i + 1);

    if (i < lines - 1) {
      printf("\n");
    }
  }

  return 0;
}

void Print(char ch, int count) {
  for (int i = 0; i < count; i++) {
    printf("%c", ch);
  }
}