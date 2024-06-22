#include <stdio.h>
#include <stdbool.h>

int main() {
  // do while LOOPS: Run the block of code as long as condition is true. 
  // Runs the code atleast once even if condition is false from the start.

  /*
    initialization;
    do {
      // statement..1
      // statement..2
      // ...
      increment/decrement
    } while (condition);
  */
  
  // Print 1 to 100

  // int i = 1;
  // do {
  //   printf("%d\n", i);
  //   i++;
  // } while (i >= 100);

  // Print all the odd numbers between 30 to 70.

  // int n = 30;
  // do {
  //   if (n % 2 != 0) {
  //     printf("%d\n", n);
  //   }
  //   n++;
  // } while (n <= 70);

  // // Print 80 to 40 in reversed order.

  int n = 80;
  do {
    printf("%d\n", n);
    n--;
  } while (n >= 40);

}