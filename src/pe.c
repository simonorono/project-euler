#include "problems/1-9/exercises.h"
#include "problems/10-19/exercises.h"

int main() {
  void (*functions[])() = {EX_1_9, EX_10_19};
  size_t len = sizeof(functions) / sizeof(functions[0]);

  for (size_t i = 0; i < len; ++i) {
    functions[i]();
  }
}
