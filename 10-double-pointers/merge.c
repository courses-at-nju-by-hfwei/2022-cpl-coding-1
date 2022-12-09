//
// Created by hengxin on 11/18/22.
//

#include <stdio.h>
#include <stdlib.h>

#define LEN_L 5
#define LEN_R 6

int *Merge(const int L[], int llen, const int R[], int rlen);

int main() {
  const int L[LEN_L] = {1, 3, 5, 7, 9};
  const int R[LEN_R] = {0, 2, 4, 6, 8, 10};

  const int *merge = Merge(L, LEN_L, R, LEN_R);
  for (int i = 0; i < LEN_L + LEN_R; i++) {
    printf("%d ", merge[i]);
  }

  return 0;
}

int *Merge(const int L[], int llen, const int R[], int rlen) {
  int *merge = malloc((llen + rlen) * sizeof *merge);

  int l = 0;
  int r = 0;
  int m = 0;

  while (l < llen && r < rlen) {
    if (L[l] <= R[r]) {
      merge[m] = L[l];
      m++;
      l++;
    } else {
      merge[m] = R[r];
      m++;
      r++;
    }
  }

  // l >= llen || r >= rlen
  while (r < rlen) {
    merge[m] = R[r];
    m++;
    r++;
  }

  while (l < llen) {
    merge[m] = L[l];
    m++;
    l++;
  }

  return merge;
}