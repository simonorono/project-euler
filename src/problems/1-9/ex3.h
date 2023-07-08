#include <stdio.h>

#ifndef PROJECT_EULER_EX3_H
#define PROJECT_EULER_EX3_H

void ex3() {
  long to_factor = 600'851'475'143;
  long largest = 0;

  while (to_factor % 2l == 0) {
    largest = 2;
    to_factor /= 2;
  }

  long f = 3;

  while (f * f <= to_factor) {
    if (to_factor % f == 0) {
      largest = f;
      to_factor /= f;
    } else {
      f += 2;
    }
  }

  if (to_factor != 1)
    largest = to_factor;

  printf("%ld\n", largest);
}

#endif//PROJECT_EULER_EX3_H
