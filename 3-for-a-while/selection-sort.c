// Created by hfwei on 2022/10/13.
//

#include <stdio.h>

#define LEN 20
int numbers[LEN] = {0};

int main() {
  /*
   * Input the array
   * Note: fails to run this program in "Run" (Ctrl + D)
   * See: https://youtrack.jetbrains.com/issue/CPP-5704
   * Use "Terminal" instead.
   */
  int len = -1;
  // input indirection (输入重定向)
  while (scanf("%d", &numbers[++len]) != EOF);

  for (int i = 0; i < len; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  // add code below
  for (int i = 0; i < len; i++) {
    // find the minimum value of numbers[i .. n-1]
    int min = numbers[i];
    int min_index = i;

    for (int j = i + 1; j <= len - 1; j++) {
      if (numbers[j] < min) {
        min = numbers[j];
        min_index = j;
      }
    }

    // swap numbers[i] and numbers[min_index]
    int temp = numbers[min_index];
    numbers[min_index] = numbers[i];
    numbers[i] = temp;
  }

  for (int i = 0; i < len; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}