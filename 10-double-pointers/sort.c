/**
 * file: sort.c
 *
 * Created by hengxin on 12/01/22.
 *
 * See also bsearch: https://en.cppreference.com/w/c/algorithm/bsearch
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

void PrintInts(const int *integers, int len);
void PrintStrs(const char *str[], int len);

int CompareInts(const void *left, const void *right);
int CompareStrs(const void *left, const void *right);

int main() {
  // sort an array of integers
  int integers[] = {-2, 99, 0, -743, 2, INT_MIN, 4};
  int size_of_integers = sizeof integers / sizeof *integers;

  /**
   * q: quick
   * qsort: https://en.cppreference.com/w/c/algorithm/qsort
   * void qsort( void *ptr, size_t count, size_t size,
            int (*comp)(const void *, const void *) );
   */
  int (*comp) (const void *, const void*) = CompareInts;

  // sort ints here
  qsort(integers, size_of_integers,
        sizeof *integers, comp);
  PrintInts(integers, size_of_integers);

  // Sorting an array of strings
  const char *names[] = {
      "Luo Dayou",
      "Cui Jian",
      "Dou Wei",
      "Zhang Chu",
      "He Yong",
      "Wan Qing",
      "WuTiaoRen",
      "ZuoXiao",
      "Hu Mage",
      "Li Zhi"
  };
  int size_of_names = sizeof names / sizeof *names;

  comp = CompareStrs;
  // sort musicians here
  qsort(names, size_of_names,
        sizeof *names, comp);
  PrintStrs(names, size_of_names);
}

void PrintInts(const int *integers, int len) {
  printf("\n");
  for (int i = 0; i < len; ++i) {
    printf("%d ", integers[i]);
  }
  printf("\n");
}

void PrintStrs(const char *str[], int len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%s\n", str[i]);
  }
  printf("\n");
}

int CompareInts(const void *left, const void *right) {
  int int_left = *(const int *) left;
  int int_right = *(const int *) right;

  if (int_left < int_right) {
    return -1;
  }

  if (int_left > int_right) {
    return 1;
  }

  return 0;
  // return int_left - int_right;
}

// actual argument: char *const *left
int CompareStrs(const void *left, const void *right) {
  char *const *pp1 = left;
  char *const *pp2 = right;

  return strcmp(*pp1, *pp2); // char *
}