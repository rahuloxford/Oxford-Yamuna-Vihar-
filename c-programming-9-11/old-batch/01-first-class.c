#include <stdio.h>

// function defination.
int getMilk() {
  printf("rahul\n \tsingh\n");
  return 0;
}

int main() {
  printf("Welcome to C programming!\n");
  getMilk();
  garbage();
  printf("Program finished!");
  return 0;
}

int garbage() {
  printf("I am garbage!");
}

/*
returnType functionName() {
  // statement--1
  // statement--2
  // statement--3
  // .
  // statement...
  
  return value;
}
*/
