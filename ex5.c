#include <stdio.h>

bool divisible_by_all_20_ints(int n) {
  for (int i = 2; i <= 20; i++) {
    if (n % i != 0) {
      return false;
    }
  }

  return true;
}

int main() {
  for (int i = 20;; ++i) {
    if (divisible_by_all_20_ints(i)) {
      printf("%d\n", i);
      break;
    }
  }
}
