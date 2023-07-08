#include "../../lib/eratosthenes.h"
#include <stdint.h>
#include <stdio.h>

#ifndef PROJECT_EULER_EX7_H
#define PROJECT_EULER_EX7_H

// this constant was set arbitrarily until the program yielded a result
#define EX7_MAX 200'000

void ex7() {
  uint8_t sieve[EX7_MAX];
  init_sieve(sieve, EX7_MAX);

  int primes_seen = 0;

  for (int i = 0; i < EX7_MAX; ++i) {
    if (is_prime(sieve, i) && (++primes_seen) == 10001) {
      printf("%d\n", i);
      break;
    }
  }
}

#endif//PROJECT_EULER_EX7_H