#include <stdio.h>

#define MAX 1000

int main() {
  for (int i = 1; i < MAX; ++i) {
    for (int j = 1; j < MAX; ++j) {
      for (int k = 1; k < MAX; ++k) {
        if (i + j + k == 1000 && (i * i + j * j == k * k)) {
          printf("%d\n", i * j * k);
          return 0;
        }
      }
    }
  }
}