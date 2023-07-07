#include <stdio.h>

int main() {
  // Gauss summation
  int sum = (100 * 101) / 2;
  int acc = sum * sum;

  for (int i = 1; i <= 100; ++i) {
    acc -= i * i;
  }

  printf("%d\n", acc);
}
