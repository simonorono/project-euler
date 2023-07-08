#include <stdint.h>
#include <stdlib.h>

#ifndef PROJECT_EULER_ERATOSTHENES_H
#define PROJECT_EULER_ERATOSTHENES_H

#define PRIME_UNDEFINED 0
#define PRIME_FALSE 1
#define PRIME_TRUE 2

#define is_undefined(SIEVE, I) (SIEVE[I] == PRIME_UNDEFINED)
#define is_prime(SIEVE, I) (SIEVE[I] == PRIME_TRUE)

void init_sieve(uint8_t *sieve, size_t size) {
  sieve[0] = sieve[1] = PRIME_FALSE;

  for (size_t i = 2; i < size; ++i) {
    sieve[i] = PRIME_UNDEFINED;
  }

  for (size_t i = 2; i < size; ++i) {
    if (!is_undefined(sieve, i)) continue;

    for (size_t j = i; j < size; j += i) {
      if (!is_undefined(sieve, j)) continue;
      sieve[j] = i == j ? PRIME_TRUE : PRIME_FALSE;
    }
  }
}

#endif//PROJECT_EULER_ERATOSTHENES_H
