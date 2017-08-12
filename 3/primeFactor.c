#include <stdio.h>
#include <math.h>

int isPrime(long long number) {
  long long index = 2;
  for (index = 2; index <= sqrt(number); index++) {
    if ((number % index) == 0) {
      return 0;
    } // this number is not prime
  } // check all possible values up to the sqrt of number
  return 1; // this number is prime
} //isPrime()

long long primeFactor(long long number) {
  long long prime = 0, index = 2;
  for (index = 2; index <= sqrt(number); index++) {
    if ((number % index == 0) && isPrime(index)) {
      printf("%lld ", index);
      prime = index;
    } // if index evenly divides number, record it
  } // check all possible values up to the sqrt of number
  printf("\n");
  return prime;
} // primeFactor()

int main (void) {
  long long number = 600851475143;
  printf("The largest prime factor of %lld is %lld\n", number, primeFactor(number));
  return 0;
} // main()