// Created by hfwei on 2022/11/25.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Swap(int *left, int *right);
void Print(const int *arr, int len);
void SelectionSort(int arr[], int len);

int main() {
  int len = 0;
  scanf("%d", &len);

  int *numbers = malloc(len * sizeof(*numbers));
  if (numbers == NULL) {
    printf("Memory allocation failed!\n");
    return 0;
  }

  for (int i = 0; i < len; i++) {
    scanf("%d", &numbers[i]);
  }

  Print(numbers, len);
  SelectionSort(numbers, len);
  Print(numbers, len);

  free(numbers);
}

void Print(const int arr[], int len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void SelectionSort(int *arr, int len) {
  for (int i = 0; i < len; i++) {
    // find the minimum of numbers[i .. len - 1]
    int min = arr[i];
    int min_index = i;
    for (int j = i + 1; j < len; j++) {
      if (arr[j] < min) {
        min = arr[j];
        min_index = j;
      }
    }

    Swap(arr + i, arr + min_index);
  }
}

void Swap(int *left, int *right) {
  int temp = *left;
  *left = *right;
  *right = temp;
}

// "Luo Dayou",
// "Cui Jian",
// "Dou Wei",
// "Zhang Chu",
// "Li Zhi",
// "Wan Qing",
// "WuTiaoRen",
// "ZuoXiao",
// "He Mage",
// "He Yong",