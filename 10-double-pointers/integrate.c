//
// Created by hfwei on 2022/12/8.
//

#include <math.h>
#include <stdio.h>
#define NUM_OF_PARTITIONS 100000

double Integrate(double low, double high, double (*fp)(double));

int main() {
  double low = 0.0;
  double high = 1.0;
  double integration = 0.0;

  integration = Integrate(low, high, sin);
  printf("sin : %f\n", integration);

  integration = Integrate(low, high, cos);
  printf("cos : %f\n", integration);

  double (*fps[2])(double) = {sin, cos};
  for (int i = 0; i < 2; i++) {
    printf("%f\n", Integrate(low, high, fps[i]));
  }

  return 0;
}

double Integrate(double low, double high, double (*fp)(double)) {
  double interval = (high - low) / NUM_OF_PARTITIONS;

  double sum = 0.0;
  for (int i = 0; i < NUM_OF_PARTITIONS; i++) {
    double xi = low + interval * i;
    double yi = fp(xi);
    sum += yi * interval;
  }

  return sum;
}