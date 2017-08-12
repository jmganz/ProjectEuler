#include <stdio.h>

int sumMultiples(int limit) {
  int sum = 0, index = 1;
  for (index = 1; index < limit; index++) {
    if ((index % 3) == 0) {
      sum += index;
    } else if ((index % 5) == 0) {
      sum += index;
    } // check if current number is divisible by 3 or 5 (don't double-count)
  } // iterate through all natural numbers up to the limit
  return sum;
} // sumMultiples()

int main(void) {
  int limit = 1000;
  int totalSum = sumMultiples(limit);
  printf("The sum of all multiples of 3 and 5 up to %d is %d\n", limit, totalSum);
  return 0;
} // main()