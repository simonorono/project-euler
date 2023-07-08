#include <stdio.h>

#ifndef PROJECT_EULER_EX2_H
#define PROJECT_EULER_EX2_H

void ex2() {
  int i = 1, j = 2;
  int acc = 0;

  while (j < 4'000'000) {
    if (j % 2 == 0)
      acc += j;

    int tmp = j;
    j = j + i;
    i = tmp;
  }

  printf("%d\n", acc);
}

#endif//PROJECT_EULER_EX2_H
