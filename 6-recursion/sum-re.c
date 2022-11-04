/**
 * file: sum-re.c
 *
 * Recursively computing the sum of an array of integers.
 *
 * Visualization: https://pythontutor.com/visualize.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20Sum%28int%20numbers%5B%5D,%20int%20len%29%3B%0A%0Aint%20main%28%29%20%7B%0A%20%20%20%20int%20numbers%5B%5D%20%3D%20%7B1,%202,%203,%204,%205%7D%3B%0A%0A%20%20%20%20int%20sum%20%3D%20Sum%28numbers,%20sizeof%20numbers%20/%20sizeof%20numbers%5B0%5D%29%3B%0A%20%20%20%20printf%28%22sum%20%3D%20%25d%5Cn%22,%20sum%29%3B%0A%0A%20%20%20%20return%200%3B%0A%7D%0A%0Aint%20Sum%28int%20numbers%5B%5D,%20int%20len%29%20%7B%0A%20%20%20%20if%20%28len%20%3D%3D%200%29%20%7B%0A%20%20%20%20%20%20%20%20return%200%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20int%20partial_sum%20%3D%20Sum%28numbers,%20len%20-%201%29%3B%0A%0A%20%20%20%20int%20sum%20%3D%20numbers%5Blen%20-%201%5D%20%2B%20partial_sum%3B%0A%0A%20%20%20%20return%20sum%3B%0A%7D&cumulative=false&heapPrimitives=nevernest&mode=edit&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
 *
 * Created by hengxin on 11/01/22.
 */

#include <stdio.h>

int Sum(const int nums[], int len);

int main() {
	int numbers[] = {1, 2, 3, 4, 5};

  // sizeof: operator
  int sum = Sum(numbers, sizeof numbers / sizeof (int));
  printf("sum = %d\n", sum);

	return 0;
}

int Sum(const int nums[], int len) {
  if (len == 0) {
    return 0;
  }

  int partial_sum = Sum(nums, len - 1);

  return partial_sum + nums[len - 1];
}