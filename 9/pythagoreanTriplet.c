#include <stdio.h>
#include <stdlib.h>

int pythagoreanTriplet(int target) {
  int a = 1, b = 1, c = 1;
  for (a = 1; a < target; a++) {
    for (b = (a + 1); b < target; b++) {
      for (c = (b + 1); c < target; c++) {
        if ((a + b + c) != target) {
          continue; // skip to the next iteration of the loop
        } else if ((a * a) + (b * b) == (c * c)) {
          //printf("%d^2 + %d^2 = %d + %d = %d = %d^2\n", a, b, (a * a), (b * b), (c * c), c);
          return (a * b * c);
        } // if the elements add to target and satisfy the pythagorean constraints
      } // search for value c
    } // search for value b
  } // search for value a
  return -1; // elements could not be found that satisfy the constraints
}

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("Usage: %s [target]\n", argv[0]);
    return 1;
  } // ensure proper execution
  int target = atoi(argv[1]);
  printf("The product of the pythagorean elements that sum to %d is %d\n", target, pythagoreanTriplet(target));
  return 0;
} // main()