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

int main() {
  // sort an array of integers
  int integers[] = {-2, 99, 0, -743, 2, INT_MIN, 4};
  int size_of_integers = sizeof integers / sizeof *integers;

  /**
   * qsort: https://en.cppreference.com/w/c/algorithm/qsort
   * void qsort( void *ptr, size_t count, size_t size,
            int (*comp)(const void *, const void *) );
   */
  // sort ints here

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

  // sort musicians here

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