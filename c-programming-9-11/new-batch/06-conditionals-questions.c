#include <stdio.h>

int main() {

  // Write a C program to check whether a given number is even or odd.
/*
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("Even\n");
  } else {
    printf("Odd\n");
  }
*/

  // Write a function to find the largest among three numbers using conditional statements.

  int first;
  int second;
  int third;
  scanf("%d", &first);
  scanf("%d", &second);
  scanf("%d", &third);

  if (first > second) {
    if (first > third) {
      printf("%d\n", first);
    } else {
      printf("%d\n", third);
    }
  } else if (second > third) {
    printf("%d\n", second);
  } else {
    printf("%d\n", third);
  }


  return 0;
}