#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isPalindrome(int number) {
  int index = 0;
  int digits = (int) ceil(log10(number));
  char* numberString = malloc(sizeof(char) * (digits + 1));
  snprintf(numberString, (digits + 1), "%d", number);
  for (index = 0; index < (digits / 2); index++) {
    if (numberString[index] != numberString[digits - (index + 1)]) {
      return 0;
    } // if symmetric digits are not equal, number is not a palindrome
  } // check symmetric digits of the current number
  return 1;
} // isPalindrome()

int divisibleThreeDigit(int number) {
  int index = 100;
  for (index = 100; index < sqrt(number); index++) {
    if (((number % index) == 0) && (ceil(log10(number / index)) == 3)) {
      printf("%d * %d = %d\n", index, (number/index), number);
      return 1;
    } // index evenly divides number and (number/index) is three digits
  } // check all possible numbers that could evenly divide number
  return 0;
} // isPrime()

int largestPalindrome(int limit) {
  int palindrome = 0, index = limit;
  for (index = limit; index > 0; index--) {
    if (isPalindrome(index) && divisibleThreeDigit(index)) {
      return index;
    } // return the largest palindrome
  } // start high and search for the first palindrome
  return palindrome;
} // largestPalindrome()

int main(void) {
  int limit = ((999 * 999) + 1);
  printf("The largest palindrome less than %d is %d\n", limit, largestPalindrome(limit));
  return 0;
} // main()