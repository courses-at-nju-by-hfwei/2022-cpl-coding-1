//
// Created by hengxin on 10/19/22.
//
// Please first read the Bubble Sort wiki page: https://en.wikipedia.org/wiki/Bubble_sort,
// and think about it before reading the code.
//
// For the usage of clock(),
// please refer to https://legacy.cplusplus.com/reference/ctime/clock/.
//

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#define LEN 1000000
int numbers[LEN] = {0};

int main() {
  srand(time(NULL));
  for (int i = 0; i < LEN; i++) {
    numbers[i] = rand() % LEN;
  }

  // set a clock
  clock_t start = clock();

  bool swapped = true;
  for (int i = 0; i < LEN && swapped; i++) {
    swapped = false;
    for (int j = 0; j < LEN - 1 - i; j++) {
      if (numbers[j] > numbers[j + 1]) {
        int temp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
        swapped = true;
      }
    }
  }

  // record the end clock
  clock_t end = clock();

  for (int i = 0; i < LEN; i++) {
    printf("%d ", numbers[i]);
  }

  long sec = (end - start) / CLOCKS_PER_SEC;
  printf("Sorting %d numbers in %ld seconds.\n", LEN, sec);

  return 0;
}