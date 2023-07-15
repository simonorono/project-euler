#ifndef PROJECT_EULER_EX15_H
#define PROJECT_EULER_EX15_H

#include <math.h>

#define EX15_GRID_SIDE (20.0)
#define FACT(n) (tgamma(n + 1))

void ex15() {
  // combinatorial of (2n / n)
  double result = FACT(EX15_GRID_SIDE * 2) / (FACT(EX15_GRID_SIDE) * FACT(EX15_GRID_SIDE));

  printf("%ld\n", (long) result);
}

#endif//PROJECT_EULER_EX15_H
