#include <stdio.h>

int main() {

  // break - to break the loop.

  // for (int n = 1; n <= 20; n++) {

  //   if (n == 15) {
  //     break;
  //   }

  //   if (n % 2 != 0) {
  //     printf("%d ", n);
  //   }
 
  // }



  // continue - continue from this point.

  for (int n = 1; n <= 20; n++) {

    if (n == 15) {
      continue;
    }

    if (n % 2 != 0) {
      printf("%d ", n);
    }
 
  }


  return 0;
}