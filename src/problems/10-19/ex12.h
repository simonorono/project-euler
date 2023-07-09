#include <math.h>
#include <stdio.h>

#ifndef PROJECT_EULER_EX12_H
#define PROJECT_EULER_EX12_H

void ex12() {
  unsigned long current = 0;

  for (unsigned long i = 1; i > 0; ++i) {
    current += i;

    int divisors = 0;
    unsigned long limit = (unsigned long) sqrt((double) current);

    for (unsigned long j = 1; j <= limit; ++j) {
      if (current % j == 0) {
        divisors++;

        if (j != current / j) {
          divisors++;
        }
      }

      if (divisors > 500) {
        printf("%ld\n", current);
        return;
      }
    }
  }
}

#endif//PROJECT_EULER_EX12_H
