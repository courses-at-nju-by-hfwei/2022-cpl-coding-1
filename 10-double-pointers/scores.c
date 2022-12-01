/**
 * file: scores.c
 *
 * Created by hengxin on 12/01/22.
 */

#include <stdio.h>
#include <stdlib.h>

#define COLS 3

void Print(int table[][COLS], int rows);

int main() {
  /**
   * C, Java, Python scores of several musicians
   */
  int rows = 0;
  printf("Please input the number of students.\n");
  scanf("%d", &rows);

  // malloc here

  printf("Please input the scores of these students.\n");

  // fill in data here

  // print it here

  // access musician_score_table[3][2]

  // ptr_scores here
  // int (*ptr_scores)[COLS] = musician_score_table;
  // printf("ptr_scores[3][2] = %d\n",
  //        (*(ptr_scores + 3))[2]);

  // do not forget to free it

  return 0;
}

void Print(int table[][COLS], int rows) {
  printf("\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", table[i][j]);
    }
    printf("\n");
  }
}