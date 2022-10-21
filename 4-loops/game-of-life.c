//
// Created by hengxin on 10/19/22.
// Run it with "Terminal"
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_ROUND 10
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
  // extend to board[SIZE + 2][SIZE + 2]
  int old_board[SIZE + 2][SIZE + 2];
  for(int row = 0; row < SIZE + 2; row++) {
    for(int col =0; col < SIZE + 2; col++) {
      if (row == 0 || row == SIZE + 1 || col == 0 || col == SIZE + 1) {
        old_board[row][col] = 0;
      } else {
        old_board[row][col] = board[row - 1][col - 1];
      }
    }
  }

  // print the original board
  system("clear");
  for(int row = 1; row <= SIZE; row++) {
    for(int col = 1; col <= SIZE; col++) {
      printf("%c ", old_board[row][col] ? '*' : ' ');
    }
    printf("\n");
  }

  int next_board[SIZE + 2][SIZE + 2] =  {0};

  for(int round = 1; round <= MAX_ROUND; round++) {
    for (int row = 1; row <= SIZE; row++) {
      for (int col = 1; col <= SIZE; col++) {
        // counting the number of neighbours
        int neighbours =
            old_board[row - 1][col - 1] +
                old_board[row - 1][col] +
                old_board[row - 1][col + 1] +
                old_board[row][col - 1] +
                old_board[row][col + 1] +
                old_board[row + 1][col - 1] +
                old_board[row + 1][col] +
                old_board[row + 1][col + 1];

        // evaluate the next_board[row][col] in the next_board
        if (old_board[row][col]) {
          next_board[row][col] = (neighbours == 2 || neighbours == 3);
        } else {
          next_board[row][col] = (neighbours == 3);
        }
      }
    }

    // print the next_board
    // wins: #include <windows.h>: Sleep(ms)
    sleep(1);

    // wins: #include <conio.h>: clrscr()
    system("clear");
    for (int row = 1; row <= SIZE; row++) {
      for (int col = 1; col <= SIZE; col++) {
        printf("%c ", next_board[row][col] ? '*' : ' ');
      }
      printf("\n");
    }

    for (int row = 0; row < SIZE + 2; row++) {
      for (int col = 0; col < SIZE + 2; col++) {
        old_board[row][col] = next_board[row][col];
      }
    }
  }


  return 0;
}