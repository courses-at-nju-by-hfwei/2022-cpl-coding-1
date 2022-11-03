/**
 * file: merge-sort.c
 *
 * Created by hengxin on 11/14/21.
 */

#include <stdio.h>

// #define LEN 8
#define LEN 7

int main() {
  // int numbers[LEN] = {6, 5, 3, 1, 8, 7, 2, 4};
  int numbers[LEN] = {38, 27, 43, 3, 9, 82, 10};

  // add code here

  for (int i = 0; i < LEN; i++) {
    printf("%d ", numbers[i]);
  }

  return 0;
}

void Merge(int nums[], int left, int mid, int right) {
  // make a copy of nums[left .. right]
  int size = right - left + 1;
  // use VLA (variable-length arrays)
  // introduced since C99
  // but made optional since C11
  int copy[size];
  for (int i = 0, j = left; i < size; i++, j++) {
    copy[i] = nums[j];
  }

  int left_index = left;
  int right_index = mid + 1;
  int copy_index = 0;

  while (left_index <= mid && right_index <= right) {
    if (nums[left_index] <= nums[right_index]) {
      copy[copy_index] = nums[left_index];
      left_index++;
    } else {
      copy[copy_index] = nums[right_index];
      right_index++;
    }

    copy_index++;
  }

  while (left_index <= mid) {
    copy[copy_index] = nums[left_index];
    left_index++;
    copy_index++;
  }

  while (right_index <= right) {
    copy[copy_index] = nums[right_index];
    right_index++;
    copy_index++;
  }

  // copy back
  for (int i = 0, j = left; i < size; i++, j++) {
    nums[j] = copy[i];
  }
}