// Created by hfwei on 11/18/2022.
//

#include <stdio.h>

#define LEN 20

void Swap(int left, int right);
void Print(const int arr[], int len);
void SelectionSort(int arr[], int len);

int main() {
  int numbers[LEN] = {0};

  /*
   * Input the array
   * Note: fails to run this program in "Run" (Ctrl + D)
   * See: https://youtrack.jetbrains.com/issue/CPP-5704
   * Use "Terminal" instead.
   */
  int len = -1;
  while (scanf("%d", &numbers[++len]) != EOF);
//  while (scanf("%d", &numbers[++len]) == 1);

  Print(numbers, len);
  // numbers: the address of the first element of the `numbers` array
  // pass by value: the copy of the address of the first element of the `numbers` array
  SelectionSort(numbers, len);
  Print(numbers, len);
}

void Print(const int arr[], int len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// arr: the (copy of the) address of the first element of the `numbers` array
void SelectionSort(int arr[], int len) {
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

    // swap arr[i] and arr[min_index]
    int tmp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = tmp;
    // Swap(1 = arr[1], 5 = arr[5])
//    Swap(arr[i], arr[min_index]);
  }
}

// left = 1, right = 5
void Swap(int left, int right) {
  int tmp = left;
  left = right;
  right = tmp;
}
// left = 5, right = 1