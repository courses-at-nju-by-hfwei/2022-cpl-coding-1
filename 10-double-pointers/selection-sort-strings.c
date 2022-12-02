// Created by hfwei on 2022/11/25.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 10

void Swap(const char **left, const char **right);
void Print(const char *arr[], int len);
void SelectionSort(const char *arr[], int len);

int main() {
  const char * musicians[LEN] = {
    "Luo Dayou",
    "Cui Jian",
    "Dou Wei",
    "Zhang Chu",
    "Yao",
    "Wan Qing",
    "ZuoXiao",
    "ErShou Rose",
    "Hu Mage",
    "Li Zhi",
  };

  Print(musicians, LEN);
  SelectionSort(musicians, LEN);
  Print(musicians, LEN);

  return 0;
}

void Print(const char *arr[], int len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%s\n", arr[i]);
  }
  printf("\n");
}

void SelectionSort(const char *arr[], int len) {
  for (int i = 0; i < len; i++) {
    // find the minimum of numbers[i .. len - 1]
    const char *min = arr[i];
    int min_index = i;
    for (int j = i + 1; j < len; j++) {
      if (strcmp(min, arr[j]) > 0) {
        min = arr[j];
        min_index = j;
      }
    }

    // swap arr[i] and arr[min_index]
    Swap(arr + i, arr + min_index);
  }
}

void Swap(const char **left, const char **right) {
  const char *temp = *left;
  *left = *right;
  *right = temp;
}