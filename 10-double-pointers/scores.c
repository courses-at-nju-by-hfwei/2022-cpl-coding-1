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
  int (*scores)[COLS] = malloc(rows * COLS * sizeof **scores);
  if (scores == NULL) {
    return 0;
  }

  printf("Please input the scores of these students.\n");

  // fill in data here
  for (int row = 0; row < rows; row++) {
    for (int col = 0; col < COLS; col++) {
      scanf("%d", &scores[row][col]);
    }
  }

  // print it here
  Print(scores, rows);

  // access musician_score_table[3][2]

  // ptr_scores here
  int (*ptr_scores)[COLS] = scores;
  printf("ptr_scores[3][2] = %d\n",
         (*(ptr_scores + 3))[2]);

  // do not forget to free it
  free(scores);

  return 0;
}

// int table[]: int *table
// int table[][COLS]: int (*table)[COLS]
void Print(int (*table)[COLS], int rows) {
  printf("\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < COLS; j++) {
      // table[i][j]: *(*(table + i) + j)
      printf("%d ", table[i][j]);
    }
    printf("\n");
  }
}