/**
 * Binary Search: the recursive version
 *
 * Created by hengxin on 11/14/21.
 */

#include <stdio.h>
#define LEN 10

int BinarySearch(int key, const int dict[], int low, int high);

int main() {
  int dictionary[LEN] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

  int key;
  scanf("%d", &key);

  printf("The index is %d.\n", BinarySearch(key, dictionary, 0, LEN - 1));

  return 0;
}

int BinarySearch(int key, const int dict[], int low, int high) {
  if (low > high) {
    return -1;
  }

  int mid = (low + high) / 2;

  if (dict[mid] == key) {
    return mid;
  }

  if (dict[mid] > key) {
    return BinarySearch(key, dict, low, mid - 1);
  }

  return BinarySearch(key, dict, mid + 1, high);
}