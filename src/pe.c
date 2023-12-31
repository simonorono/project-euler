#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "problems/1-9/exercises.h"
#include "problems/10-19/exercises.h"

#define NO_FILTER (0)
#define BAD_FILTER (-1)

static void (*functions[])() = {EX_1_9, EX_10_19};

#define TOTAL_SOLUTIONS \
  (sizeof(functions) / sizeof(functions[0]))

static bool is_number(const char *str) {
  size_t len = strlen(str);

  for (size_t i = 0; i < len; ++i)
    if (!isdigit(str[i]))
      return false;

  return true;
}

static int get_filter(int argc, const char *argv[]) {
  if (argc <= 1) {
    return NO_FILTER;
  }

  if (!is_number(argv[1])) {
    printf("First positional argument must be an integer.\n");
    return BAD_FILTER;
  }

  int filter = (int) strtol(argv[1], NULL, 10);

  if (filter < 1 || filter > TOTAL_SOLUTIONS) {
    printf("First positional argument must be an integer between 1 and %zu.\n", TOTAL_SOLUTIONS);
    return BAD_FILTER;
  }

  return filter;
}

int main(int argc, const char *argv[]) {
  int filter = get_filter(argc, argv);

  if (filter == BAD_FILTER) {
    return 0;
  }

  if (filter > 0) {
    printf("#%d: ", filter);
    functions[filter - 1]();
    return 0;
  }

  for (size_t i = 0; i < TOTAL_SOLUTIONS; ++i) {
    printf("#%zu: ", i + 1);
    functions[i]();
  }
}
