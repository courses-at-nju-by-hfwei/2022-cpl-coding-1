/**
 * file: merge-sort.c
 *
 * Created by hengxin on 11/14/21.
 */

#include <stdio.h>

// #define LEN 8
#define LEN 7

void MergeSort(int nums[], int left, int right);

/**
 * @brief Merge nums[left .. mid] and nums[mid + 1 .. right]
 *
 * @param nums
 * @param left
 * @param mid
 * @param right
 */
void Merge(int nums[], int left, int mid, int right);

int main() {
  // int numbers[LEN] = {6, 5, 3, 1, 8, 7, 2, 4};
  int numbers[LEN] = {38, 27, 43, 3, 9, 82, 10};

  // add code here
  MergeSort(numbers, 0, LEN - 1);

  for (int i = 0; i < LEN; i++) {
    printf("%d ", numbers[i]);
  }

  return 0;
}

void MergeSort(int nums[], int left, int right) {
  if (left == right) {
    return;
  }

  int mid = (left + right) / 2;

  MergeSort(nums, left, mid);
  MergeSort(nums, mid + 1, right);

  Merge(nums, left, mid, right);
}

void Merge(int nums[], int left, int mid, int right) {
  // add code here
  int size = right - left + 1;
  // VLA: variable-length array
  // Since C99
  // C11 made optional
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

  // add code here
  for (int i = 0, j = left; i < size; i++, j++) {
    nums[j] = copy[i];
  }

}