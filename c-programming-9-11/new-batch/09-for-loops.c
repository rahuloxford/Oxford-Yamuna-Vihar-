#include <stdio.h>

int main() {

  // --FOR LOOP--

  /*
    for (initialization; condition; increment/decrement) {
      // code to executed.
    }
  */

  // Print all the numbers from 10 to 50.

  for (int i = 10; i <= 50; i++) {
    printf("%d ", i);
  }

  printf("\n");

  // Print first 30 even numbers.

  for (int i = 1; i <= 30*2; i++) {
    if (i % 2 == 0) {
      printf("%d ", i);
    }
  }

  return 0;
}