#include <stdint.h>
#include <stdio.h>

#ifndef PROJECT_EULER_EX10_H
#define PROJECT_EULER_EX10_H

#define EX10_MAX 2'000'000

void ex10() {
  uint8_t sieve[EX10_MAX] = {0};
  long sum = 0;

  for (int i = 2; i < EX10_MAX; ++i) {
    if (sieve[i] != 0) continue;

    for (int j = i; j < EX10_MAX; j += i) {
      if (sieve[j] != 0) continue;
      sieve[j] = i == j ? 2 : 1;
    }

    sum += i;
  }

  printf("%ld\n", sum);
}

#endif//PROJECT_EULER_EX10_H