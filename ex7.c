#include <stdint.h>
#include <stdio.h>

// this constant was set arbitrarily until the program yielded a result
#define MAX 200'000

int main() {
  uint8_t primes[MAX] = {0};
  int primes_seen = 0;

  // 2 means prime, 1 means not prime, 0 means not seen

  for (int i = 2; i < MAX; ++i) {
    if (primes[i] != 0) continue;

    for (int j = i; j < MAX; j += i) {
      if (primes[j] != 0) continue;

      primes[j] = i == j ? 2 : 1;
    }

    if ((++primes_seen) == 10001) {
      printf("%d\n", i);
      break;
    }
  }
}
