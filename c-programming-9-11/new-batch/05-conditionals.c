#include <stdio.h>
#include <stdbool.h>

int main() {

  /*
    score >= 90 -> A
    score >= 80 -> B
    score >= 70 -> C
    score >= 60 -> D
    score >= 50 -> E
    score < 50 --> Fail
  */

  // int score = 92;

  // if (score >= 90) {
  //   printf("A Grade");
  // } if (score >= 80) {
  //   printf("B Grade");
  // } if (score >= 70) {
  //   printf("C Grade");
  // } if (score >= 60) {
  //   printf("D Grade");
  // } if (score >= 50) {
  //   printf("E Grade");
  // }


  /*
    if (condition) {
      // code
    } else if (condition) {
      // code
    } else if (condition) {
      // code
    } else if (condition) {
      // code
    } else {
      // code
    }
  */

  int score = 41;

  if (score >= 90) {
    printf("A");
  } else if (score >= 80) {
    printf("B");
  } else if (score >= 70) {
    printf("C");
  } else if (score >= 60) {
    printf("D");
  } else if (score >= 50) {
    printf("E");
  } else {
    printf("FAIL.");
  }

  // CONCEPT: Nested Conditional Statement

  // if (condition) {
  //   if (condition) {
  //     // code
  //   } else {
  //     if (condition) {
  //       // code
  //     } else if (condition) {
  //       // code
  //     } else {
  //       // code
  //     }
  //   }
  // } else {
  //   // code
  //   if (condition) {
  //     // code
  //   }
  // }

  return 0;
}