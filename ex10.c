#include <stdint.h>
#include <stdio.h>

#define MAX 2'000'000

int main() {
  uint8_t sieve[MAX] = {0};
  long sum = 0;

  for (int i = 2; i < MAX; ++i) {
    if (sieve[i] != 0) continue;

    for (int j = i; j < MAX; j += i) {
      if (sieve[j] != 0) continue;
      sieve[j] = i == j ? 2 : 1;
    }

    sum += i;
  }

  printf("%ld\n", sum);
}