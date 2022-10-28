// Created by hfwei on 2022/10/13.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 21

bool IsPalindrome(const char str[]);

int main() {
  char string[LEN] = "";
  scanf("%20s", string);

//  int len = 0;
//  while (string[len] != '\0') {
//    len++;
//  }

  printf("\"%s\" is %s a palindrome.\n", string,
         IsPalindrome(string) ? "" : "not");

  return 0;
}

bool IsPalindrome(const char str[]) {
  int len = strlen(str);

  for (int i = 0, j = len - 1; i < j; i++, j--) {
    if (str[i] != str[j]) {
      return false;
    }
  }

  return true;
}