#include "../../lib/eratosthenes.h"
#include <stdint.h>
#include <stdio.h>

#ifndef PROJECT_EULER_EX10_H
#define PROJECT_EULER_EX10_H

#define EX10_MAX 2'000'000

void ex10() {
  uint8_t *sieve = calloc(sizeof(uint8_t), EX10_MAX);
  init_sieve(sieve, EX10_MAX);
  long sum = 0;

  for (int i = 0; i < EX10_MAX; ++i)
    if (is_prime(sieve, i))
      sum += i;

  free(sieve);

  printf("%ld\n", sum);
}

#endif//PROJECT_EULER_EX10_H