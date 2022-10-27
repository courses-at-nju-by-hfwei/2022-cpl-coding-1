//
// Created by hengxin on 10/19/22.
// Run it with "Terminal"
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 6
int board[SIZE][SIZE] = {
    {0},
    {0, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 1, 0},
    {0, 0, 0, 1, 1, 0},
    {0}
};

//int board[SIZE][SIZE] = {
//    [1][1] = 1, [1][2] = 1,
//    [2][1] = 1, [2][2] = 1,
//    [3][3] = 1, [3][4] = 1,
//    [4][3] = 1, [4][4] = 1
//};

int main() {
  // add code here
  // extend board[SIZE][SIZE] to old_board[SIZE + 2][SIZE + 2]
  int old_board[SIZE + 2][SIZE + 2] = {0};
  for (int row = 0; row < SIZE + 2; row++) {
    for (int col = 0; col < SIZE + 2; col++) {
      if (row == 0 || row == SIZE + 1 || col == 0 || col == SIZE + 1) {
        old_board[row][col] = 0;
      } else {
        old_board[row][col] = board[row - 1][col - 1];
      }
    }
  }

  // for wins: #include <conio.h>: clrsrc()
  system("clear");

  // print the original board
  for (int row = 1; row <= SIZE; row++) {
    for (int col = 1; col <= SIZE; col++) {
      printf("%c ", old_board[row][col] ? '*' : ' ');
    }
    printf("\n");
  }

  int next_board[SIZE + 2][SIZE + 2] = {0};
  for (int round = 1; round <= 10; round++) {
    for (int row = 1; row <= SIZE; row++) {
      for (int col = 1; col <= SIZE; col++) {
        // count the neighbors of old[row][col] on the old_board
        int neighbors =
            old_board[row - 1][col - 1] +
                old_board[row - 1][col] +
                old_board[row - 1][col + 1] +
                old_board[row][col - 1] +
                old_board[row][col + 1] +
                old_board[row + 1][col - 1] +
                old_board[row + 1][col] +
                old_board[row + 1][col + 1];

        // evaluate next_board[row][col] on the next_board
        if (old_board[row][col]) {
          next_board[row][col] = (neighbors == 2 || neighbors == 3);
        } else {
          next_board[row][col] = (neighbors == 3);
        }
      }
    }

    // for wins: #include <windows.h>: Sleep(ms)
    sleep(1);

    // for wins: #include <conio.h>: clrsrc()
    system("clear");
    for (int row = 1; row <= SIZE; row++) {
      for (int col = 1; col <= SIZE; col++) {
        printf("%c ", next_board[row][col] ? '*' : ' ');
      }
      printf("\n");
    }

    // copy
    for (int row = 1; row <= SIZE; row++) {
      for (int col = 1; col <= SIZE; col++) {
        old_board[row][col] = next_board[row][col];
      }
    }
  }

  return 0;
}