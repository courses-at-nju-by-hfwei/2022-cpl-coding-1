//
// Created by hengxin on 10/19/22.
//
// For the usage of clock(),
// please refer to https://legacy.cplusplus.com/reference/ctime/clock/.
//

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#define LEN 100000
int numbers[LEN] = {0};

int main() {

  for (int i = 0; i < LEN; i++) {
    printf("%d ", numbers[i]);
  }

  return 0;
}