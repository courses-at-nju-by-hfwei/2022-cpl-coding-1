/**
 * file: gcd-euclid.c
 *
 * Euclid's algorithm:
 *
 * if a > b
 * then gcd(a, b) = gcd(a - b, b)
 * else gcd(a, b) = gcd(a, b - a)
 *
 * Created by hengxin on 11/01/22.
 */

#include <stdio.h>

int main() {
  int a;
  int b;
  scanf("%d %d", &a, &b);

  return 0;
}