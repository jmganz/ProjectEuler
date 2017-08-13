#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime (int number) {
  int index = 2;
  for (index = 2; index <= ceil(sqrt(number)); index++) {
    if ((number % index) == 0) {
      return 0;
    } // if index ever evenly divides number, number is not prime
  } // check all values that might evenly divide number
  return 1;
} // isPrime()

int bigPrime(int threshold) {
  int index = 1, count = 1;
  while (count < threshold) {
    index++;
    if (isPrime(index)) {
      count++;
    } // increment the number of primes seen
  } // find the primes up to threshold
  return index;
} // bigPrime()

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("Usage: %s [threshold]\n", argv[0]);
    return 1;
  } // Ensure proper execution
  int threshold = atoi(argv[1]);
  printf("The %dth prime is %d\n", threshold, bigPrime(threshold));
  return 0;
} // main()