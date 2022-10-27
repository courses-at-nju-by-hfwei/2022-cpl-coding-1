// Created by hfwei on 2022/10/13.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 21
char string[LEN] = "";

bool IsPalindrome(char str[], int len);

int main() {
  scanf("%20s", string);

  int len = 0;
  while (string[len] != '\0') {
    len++;
  }


  printf("\"%s\" is %s a palindrome.\n", string,
         IsPalindrome(string, len) ? "" : "not");

  return 0;
}

bool IsPalindrome(char str[], int len) {
  bool is_palindrome = true;
  for (int i = 0, j = len - 1; i < j; i++, j--) {
    if (str[i] != str[j]) {
      is_palindrome = false;
      break;
    }
  }

  return is_palindrome;
}