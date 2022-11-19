// Created by hfwei on 11/18/2022.
//

#include <stdio.h>
// not malloc.h
#include <stdlib.h>

void WrongSwap(int left, int right);
void Swap(int *left, int *right);
void Print(const int arr[], int len);
void SelectionSort(int arr[], int len);

int main() {
  int len = 0;
  scanf("%d", &len);

  // void *
  int *numbers = malloc(len * sizeof(*numbers));
  // NULL: (void *) 0
  if (numbers == NULL) {
    printf("Memory allocation failed\n");
    return 0;
  }

  for (int i = 0; i < len; i++) {
    scanf("%d", &numbers[i]);
  }

  Print(numbers, len);
  // numbers: the address of the first element of the `numbers` array
  // pass by value: the copy of the address of the first element of the `numbers` array
  SelectionSort(numbers, len);
  Print(numbers, len);

  // free(numbers);

  // free(numbers);
  // numbers[2] = 2;
}

void Print(const int arr[], int len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// arr: the (copy of the) address of the first element of the `numbers` array
// int arr[] vs. int *arr
void SelectionSort(int *arr, int len) {
  for (int i = 0; i < len; i++) {
    // find the minimum of numbers[i .. len - 1]
    // arr[i] is shorthand for *(arr + i), *(i + arr)
    // i[arr]
    int min = arr[i];
    int min_index = i;
    for (int j = i + 1; j < len; j++) {
      if (arr[j] < min) {
        min = arr[j]; // *(arr + j)
        min_index = j;
      }
    }

    // swap arr[i] and arr[min_index]
    // int tmp = arr[i];
    // arr[i] = arr[min_index];
    // arr[min_index] = tmp;
    // WrongSwap(1 = arr[1], 5 = arr[5])
    // arr[i]: *(arr + i); &arr[i]: &(* (arr + i)) = arr + i
    // &arr[i] is the same as arr + i
    Swap(arr + i, arr + min_index);
  }
}

void Swap(int *left, int *right) {
  int temp = *left;
  *left = *right;
  *right = temp;
}

// left = 1, right = 5
void WrongSwap(int left, int right) {
  int tmp = left;
  left = right;
  right = tmp;
}
// left = 5, right = 1