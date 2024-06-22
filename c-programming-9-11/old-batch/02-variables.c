#include <stdio.h>
int main()
{
  int x; // initialization
  x = 100; // declaration
  // variables
  int a = 10;
  int b = 20;
  int c = a + b;
  const float pi = 3.14;
  
  a = 20;
  b = 50;
  
  printf("The value of \"a\" is: %d\n", a);
  printf("The value of b is: %d\n", b);
  printf("The value of c is: %d\n", c);
  printf("The value of PI is: %f\n", pi);
}