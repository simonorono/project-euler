#include <stdio.h>

#ifndef PROJECT_EULER_EX1_H
#define PROJECT_EULER_EX1_H

void ex1() {
  int acc = 0;

  for (int i = 1; i < 1000; i++)
    if (i % 3 == 0 || i % 5 == 0)
      acc += i;

  printf("%d\n", acc);
}

#endif//PROJECT_EULER_EX1_H