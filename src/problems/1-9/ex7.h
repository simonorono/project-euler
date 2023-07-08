#include <stdint.h>
#include <stdio.h>

#ifndef PROJECT_EULER_EX7_H
#define PROJECT_EULER_EX7_H

// this constant was set arbitrarily until the program yielded a result
#define EX7_MAX 200'000

void ex7() {
  uint8_t primes[EX7_MAX] = {0};
  int primes_seen = 0;

  // 2 means prime, 1 means not prime, 0 means not seen

  for (int i = 2; i < EX7_MAX; ++i) {
    if (primes[i] != 0) continue;

    for (int j = i; j < EX7_MAX; j += i) {
      if (primes[j] != 0) continue;

      primes[j] = i == j ? 2 : 1;
    }

    if ((++primes_seen) == 10001) {
      printf("%d\n", i);
      break;
    }
  }
}

#endif//PROJECT_EULER_EX7_H