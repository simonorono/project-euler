#include "ex17.h"

#include "string.h"

static unsigned long special_cases(int n) {
  switch (n) {
    case 1:
      return strlen("one");
    case 2:
      return strlen("two");
    case 3:
      return strlen("three");
    case 4:
      return strlen("four");
    case 5:
      return strlen("five");
    case 6:
      return strlen("six");
    case 7:
      return strlen("seven");
    case 8:
      return strlen("eight");
    case 9:
      return strlen("nine");
    case 10:
      return strlen("ten");
    case 11:
      return strlen("eleven");
    case 12:
      return strlen("twelve");
    case 13:
      return strlen("thirteen");
    case 14:
      return strlen("fourteen");
    case 15:
      return strlen("fifteen");
    case 16:
      return strlen("sixteen");
    case 17:
      return strlen("seventeen");
    case 18:
      return strlen("eighteen");
    case 19:
      return strlen("nineteen");
    case 20:
      return strlen("twenty");
    case 30:
      return strlen("thirty");
    case 40:
      return strlen("forty");
    case 50:
      return strlen("fifty");
    case 60:
      return strlen("sixty");
    case 70:
      return strlen("seventy");
    case 80:
      return strlen("eighty");
    case 90:
      return strlen("ninety");
    default:
      return 0;
  }
}

void ex17() {
  unsigned long result = 0;

  int i = 1;

  for (; i < 20; i++) {
    result += special_cases(i);
  }

  for (; i < 100; ++i) {
    result += special_cases((i / 10) * 10);
    result += special_cases(i % 10);
  }

  const unsigned long and_len = strlen("and");
  const unsigned long hundred_len = strlen("hundred");
  const unsigned long thousand_len = strlen("thousand");

  for (; i < 1000; ++i) {
    const int hundred = i / 10 / 10;// only the digit
    const int tens = i % 100;

    result += special_cases(hundred) + hundred_len;

    if (tens > 0) {
      result += and_len;

      if (tens < 20) {
        result += special_cases(tens);
      } else {
        result += special_cases((tens / 10) * 10);
        result += special_cases(tens % 10);
      }
    }
  }

  result += (special_cases(1) + thousand_len);

  printf("%ld\n", result);
}