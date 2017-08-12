#include <stdio.h>

int sumEvenFib(int limit) {
  int sum = 0, fibA = 1, fibB = 2, fibTemp = 0;
  while ((fibA < limit)) {
    if ((fibA % 2) == 0) {
      sum += fibA;
    } // sum the even values
    fibTemp = fibB;
    fibB += fibA;
    fibA = fibTemp; // shift the fibonacci values
  } // consider all fibonacci values up to the limit
  return sum;
} // sumEvenFib()

int sumEvenFibRecursive(int fibA, int fibB, int sum, int limit) {
  if (fibA >= limit) {
    return sum; // limit reached; return sum
  } else if ((fibA % 2) == 0) {
    sum += fibA;
  } // add even fibonacci values to the sum
  return sumEvenFibRecursive(fibB, (fibA + fibB), sum, limit); // check the next fibonacci value
} // recursive implementatiob of sumEvenFib()

int main(void) {
  int limit = 4000000;
  printf("The sum of all even Fibonacci values up to %d is %d\n", limit, sumEvenFib(limit));
  printf("The sum of all even Fibonacci values up to %d is %d\n", limit, sumEvenFibRecursive(1, 2, 0, limit));
  return 0;
} // main()