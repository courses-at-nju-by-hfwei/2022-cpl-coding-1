//
// Created by hfwei on 2022/11/25.
//

#include <stdio.h>

int StrLen(const char *s);
size_t StrLenStd(const char *s);

int main() {
  char msg[20] = "Hello World!";
  printf("%s\n", msg);

  msg[0] = 'N';
  printf("%s\n", msg);

  // string literal;
  // may be stored in read-only memory
  // undefined behavior
  // char *ptr_msg = "Hello World!";
  // ptr_msg[0] = 'N';
  // interrupted by signal 11: SIGSEGV
  // SIG: signal; SEGV: segmentation violation
  // printf("%s\n", msg);

  printf("StrLen(%s) = %d\n", msg, StrLen(msg));

  return 0;
}

int StrLen(const char *s) {
  int len = 0;
  while (s[len] != '\0') {
    len++;
  }

  return len;
}

size_t StrLenStd(const char *s) {
  const char *sc;
  for (sc = s; *sc != '\0'; sc++);

  return (sc - s);
}