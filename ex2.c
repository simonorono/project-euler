#include <stdio.h>

int main() {
  int i = 1, j = 2;
  int acc = 0;

  while (j < 4'000'000) {
    if (j % 2 == 0)
      acc += j;

    int tmp = j;
    j = j + i;
    i = tmp;
  }

  printf("%d\n", acc);
}
