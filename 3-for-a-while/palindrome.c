// Created by hfwei on 2022/10/13.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 21
char string[LEN] = "";

int main() {
  scanf("%20s", string);

  // add code below

  bool is_palindrome = true;

  // add code below


  printf("\"%s\" is %s a palindrome.\n", string,
         is_palindrome ? "" : "not");

  return 0;
}