#include <stdio.h>
/**
 * file: gcd-euclid-iter.c
 *
 * Visualization (gcd(64, 18) for illustration):
 * 	https://pythontutor.com/c.html#code=int%20main%28%29%20%7B%0A%0A%20%20int%20a%20%3D%2064%3B%0A%20%20int%20b%20%3D%2018%3B%0A%0A%20%20while%20%28a%20!%3D%20b%29%20%7B%0A%20%20%20%20if%20%28a%20%3E%20b%29%20%7B%0A%20%20%20%20%20%20a%20%3D%20a%20-%20b%3B%0A%20%20%20%20%7D%20else%20%7B%0A%20%20%20%20%20%20b%20%3D%20b%20-%20a%3B%0A%20%20%20%20%7D%0A%20%20%7D%0A%20%20%0A%20%20return%200%3B%0A%7D&curInstr=28&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D
 *
 * Created by hengxin on 11/01/22.
 */

int main() {
  int a;
  int b;
  scanf("%d %d", &a, &b);

  return 0;
}