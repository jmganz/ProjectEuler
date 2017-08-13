#include <stdio.h>
#include <stdlib.h>

int sumSquareDiff(int threshold) {
  int sumSquare = 0, squareSum = 0, difference = -1, index = 1;
  for (index = 1; index <= threshold; index++) {
    sumSquare += (index * index);
    squareSum += index;
  }
  squareSum *= squareSum;
  difference = squareSum - sumSquare;
  return difference;
} // sumSquareDiff()

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("Usage: %s [threshold]\n", argv[0]);
    return 1;
  }
  int threshold = atoi(argv[1]);
  printf("The sum-square-difference of numbers up to %d is %d\n", threshold, sumSquareDiff(threshold));
  return 0;
} // main()