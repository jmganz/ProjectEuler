#include <stdio.h>

int smallestMultiple(int threshold) {
  int divisor = 2, multiple = threshold;
  while (multiple < 2000000000) {
    for (divisor = 2; divisor < threshold; divisor++) {
      if ((multiple % divisor) != 0) {
        break;
      } // this potential multiple failed
    } // check each divisor up to threshold
    if ((divisor == threshold) && ((multiple % divisor) == 0)) {
      return multiple;
    } // multiple is divisible by all numbers up to threshold
    multiple++;
  } // this seems like a reasonable limit
  return -1;
} // smallestMultiple()

int main(void) {
  int threshold = 20;
  printf("The smallest number divisible by all numbers up to %d is %d\n", threshold, smallestMultiple(threshold));
  return 0;
} // main()