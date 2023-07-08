#include <stdio.h>
#include <stdlib.h>

static int digits_in_int(int n) {
  int result = 0;

  while (n != 0) {
    n /= 10;
    result++;
  }

  return result;
}

static void fill_array(int array[], int digits, int testing) {
  int c = 0;

  while (testing != 0) {
    array[digits - c - 1] = testing % 10;
    testing /= 10;
    c++;
  }
}

static bool is_palindrome(const int array[], int n) {
  bool result = true;

  for (int i = 0; i < n / 2; i++) {
    int j = n - i - 1;

    if (array[i] != array[j]) {
      result = false;
    }
  }

  return result;
}

void ex4() {
  int largest = 0;

  for (int i = 100; i < 1000; ++i) {
    for (int j = 100; j < 1000; ++j) {
      int testing = i * j;
      int digits = digits_in_int(testing);
      int *array = calloc(sizeof(int), digits);
      fill_array(array, digits, testing);

      if (is_palindrome(array, digits) && testing > largest) {
        largest = testing;
      }

      free(array);
    }
  }

  printf("%d\n", largest);
}
