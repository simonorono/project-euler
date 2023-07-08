#include <stdio.h>

#ifndef PROJECT_EULER_EX6_H
#define PROJECT_EULER_EX6_H

void ex6() {
  // Gauss summation
  int sum = (100 * 101) / 2;
  int acc = sum * sum;

  for (int i = 1; i <= 100; ++i) {
    acc -= i * i;
  }

  printf("%d\n", acc);
}

#endif//PROJECT_EULER_EX6_H
