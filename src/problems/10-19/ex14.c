#include "ex14.h"
#include <stdio.h>

static int collatz_sequence_length(int n) {
  unsigned long long iter = n;
  int size = 1;

  while (iter != 1) {
    size++;

    if (iter % 2 == 0) {
      iter /= 2;
    } else {
      iter = (iter * 3) + 1;
    }
  }

  return size;
}

void ex14() {
  int longest = 0;
  int starting_for_longest = 0;

  for (int i = 1; i < 1'000'000; ++i) {
    int length = collatz_sequence_length(i);

    if (length > longest) {
      longest = length;
      starting_for_longest = i;
    }
  }

  printf("%d\n", starting_for_longest);
}