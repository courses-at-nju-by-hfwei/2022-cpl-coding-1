/**
 * file: radius.c
 *
 * Created by hengxin on 11/18/22.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  /********** On radius **********/
  int radius = 10;

  printf("radius = %d\n", radius);
  printf("The address of radius is %p\n", &radius);

  // radius as a lvalue (space; memory; storage; address)
  radius = 20;
  // radius as a rvalue (value)
  double circumference = 2 * 3.14 * radius;
  printf("radius = %d; circumference = %f\n", radius, circumference);
  /********** On radius **********/

  /********** On ptr_radius1 **********/
  // type: int * (point to int); value: &radius
  int *ptr_radius1 = &radius;
  printf("The address of ptr_radius1 = %p\n", &ptr_radius1);
  /********** On ptr_radius1 **********/

  /********** On *ptr_radius1 **********/
  // *: indirection/dereference (间接寻址/解引用)
  // *ptr_radius1 is the same as radius
  // radius = 100;
  *ptr_radius1 = 100;
  printf("radius = %d\n", radius);
  printf("radius = %d\n", *ptr_radius1);
  /********** On *ptr_radius1 **********/

  /********** On ptr_radius1 again **********/
  int radius1 = 1000;
  printf("The address of radius1 is %p\n", &radius1);

  int *ptr_radius_1 = &radius1;
  ptr_radius1 = ptr_radius_1;
  printf("The value of ptr_radius1 is %p\n", ptr_radius1);
  /********** On ptr_radius1 again **********/

  /********** On array names **********/
  int arr[] = {1, 2, 3};
  // arr = arr + 1;
  int *ptr_array = arr;
  ptr_array++;
  /********** On array names **********/

  /********** On malloc/free **********/
  int array[5] = {0};
  // free(array);
  /********** On malloc/free **********/

  /********** On const **********/

  /********** On const **********/
}