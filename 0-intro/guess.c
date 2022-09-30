//
// Created by hengxin on 9/23/22.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
  int high = 100;
  int number_of_tries = 7;

  /*
   * print the rules of the game to players
   */
  printf("Let us play the Guess the Number game.\n"
         "The computer will generate a number between 1 and %d.\n"
         "You have %d tires.\n", high, number_of_tries);

  /*
   * generate a random number between 1 and high as the secret number
   */
  srand(time(NULL));
  int secret = rand() % high + 1;
  printf("Test: secret = %d.\n", secret);

  /*
   * ask the player to input a guess
   */

  /*
   * obtain the guessed number,
   * compare it with the secret number,
   * and inform the player of the result
   */
  while (number_of_tries > 0) {
    printf("Please input your guess.\n"
           "You still have %d tries.\n", number_of_tries);

    int guess = 0;
    scanf("%d", &guess);
    printf("Your guess is %d.\n", guess);

    if (guess == secret) {
      printf("You Win!\n");
      break;
    } else if (guess > secret) {
      printf("guess > secret\n");
    } else {
      printf("guess < secret\n");
    }

    /*
     * repeat (3)-(4) until the player wins or loses
     */
    number_of_tries--;

    /*
     * TODO: I have left at least one bug in this program.
     * Can you find it (first in natural languages)?
     * Can you fix it (in C language)?
     */
  }

  return 0;
}