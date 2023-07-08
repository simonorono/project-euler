#include <stdio.h>

#ifndef PROJECT_EULER_EX9_H
#define PROJECT_EULER_EX9_H

#define EX9_MAX 1000

void ex9() {
  for (int i = 1; i < EX9_MAX; ++i) {
    for (int j = 1; j < EX9_MAX; ++j) {
      for (int k = 1; k < EX9_MAX; ++k) {
        if (i + j + k == 1000 && (i * i + j * j == k * k)) {
          printf("%d\n", i * j * k);
          return;
        }
      }
    }
  }
}

#endif//PROJECT_EULER_EX9_H