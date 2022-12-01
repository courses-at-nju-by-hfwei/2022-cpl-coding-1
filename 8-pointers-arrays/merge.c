//
// Created by hengxin on 11/18/22.
//

#include <stdio.h>

#define LEN_L 5
#define LEN_R 6

void Merge(int L[], int llen, int R[], int rlen);

int main() {
  int L[LEN_L] = {1, 3, 5, 7, 9};
  int R[LEN_R] = {0, 2, 4, 6, 8, 10};

  Merge(L, LEN_L, R, LEN_R);

  return 0;
}

void Merge(int L[], int llen, int R[], int rlen) {
  int l = 0;
  int r = 0;

  while (l < llen && r < rlen) {
    if (L[l] <= R[r]) {
      printf("%d ", L[l]);
      l++;
    } else {
      printf("%d ", R[r]);
      r++;
    }
  }

  // l >= llen || r >= rlen
  while (r < rlen) {
    printf("%d ", R[r]);
    r++;
  }

  while (l < llen) {
    printf("%d ", L[l]);
    l++;
  }
}