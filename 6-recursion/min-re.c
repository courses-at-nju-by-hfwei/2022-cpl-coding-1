/**
 * file: min-re.c
 *
 * Recursively find the minimum of an array of integers
 *
 * Visualization: https://pythontutor.com/visualize.html#code=%23include%20%3Cstdio.h%3E%0A%0A%23define%20NUM%205%0Aint%20numbers%5BNUM%5D%20%3D%20%7B25,%2034,%2037,%2045,%2043%7D%3B%0A%0Aint%20Min%28const%20int%20nums%5B%5D,%20int%20len%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20int%20min%20%3D%20Min%28numbers,%20NUM%29%3B%0A%20%20printf%28%22min%20%3D%20%25d%5Cn%22,%20min%29%3B%0A%0A%20%20return%200%3B%0A%7D%0A%0Aint%20Min%28const%20int%20numbers%5B%5D,%20int%20len%29%20%7B%0A%20%20if%20%28len%20%3D%3D%201%29%20%7B%0A%20%20%20%20return%20numbers%5B0%5D%3B%0A%20%20%7D%0A%0A%20%20int%20partial_min%20%3D%20Min%28numbers,%20len%20-%201%29%3B%0A%20%20return%20numbers%5Blen%20-%201%5D%20%3C%20partial_min%20%3F%20numbers%5Blen%20-%201%5D%20%3A%20partial_min%3B%0A%7D&cumulative=false&heapPrimitives=nevernest&mode=edit&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
 *
 * Created by hengxin on 11/01/22.
 */

#include <stdio.h>

#define NUM 5

int Min(const int nums[], int len);

int main() {
  int numbers[NUM] = {25, 34, 37, 45, 43};

  int min = Min(numbers, NUM);
  printf("min = %d\n", min);

  return 0;
}

int Min(const int nums[], int len) {
  if (len == 1) {
    return nums[0];
  }

  int partial_min = Min(nums, len - 1);
  return nums[len - 1] < partial_min ? nums[len - 1] : partial_min;
}