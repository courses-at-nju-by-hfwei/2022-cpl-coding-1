/**
 * file: decl.c
 *
 * Created by hengxin on 12/01/22.
 */

int main() {
  char **argv;

  int *names[10];

  int (*musician_score_table)[10];

  int *StrCpyStd(char *dest, const char *src);

  int (*comp)(const void *left, const void *right);

  int atexit(void (*func)(void));

  void (*signal(int sig, void (*handler)(int)))(int);

  char (*(*func(int num, char *str))[])();

  char (*(*arr[3])())[5];
}