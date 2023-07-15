#ifndef PROJECT_EULER_EX16_H
#define PROJECT_EULER_EX16_H

#include <gmp.h>
#include <stdio.h>

#define RESULT_BUFFER_SIZE 1000

void ex16() {
  mpz_t two, result;
  mpz_init(two);
  mpz_init(result);

  mpz_set_d(two, 2);
  mpz_pow_ui(result, two, 1000);

  char result_str[RESULT_BUFFER_SIZE];
  for (int i = 0; i < RESULT_BUFFER_SIZE; ++i) result_str[i] = '0';

  mpz_get_str(result_str, 10, result);
  mpz_clear(two);
  mpz_clear(result);

  int sum = 0;

  for (int i = 0; i < RESULT_BUFFER_SIZE; ++i) {
    if (result_str[i] == 0) break;//mpz_get_str sets the last char as NULL

    sum += ((result_str[i] - '0'));
  }

  printf("%d\n", sum);
}

#endif//PROJECT_EULER_EX16_H
