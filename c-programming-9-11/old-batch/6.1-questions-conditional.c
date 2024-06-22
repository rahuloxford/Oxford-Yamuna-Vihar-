
#include <stdio.h>

int main()
{
    // Write a C program to check if a given number is positive, negative, or zero.
    
    // int number;
    // printf("User enter a number: ");
    // scanf("%d", &number);
    
    // if (number > 0) {
    //     printf("POSITIVE NUMBER!!");
    // } else if (number < 0) {
    //     printf("NEGATIVE NUMBER!!");
    // } else {
    //     printf("ZERO");
    // }
    
    // NESTED IF_ELSE.
    
    // if () {
    //     if () {
            
    //     } else {
    //         if () {
                
    //         } else if () {
                
    //         } else {
                
    //         }
    //     }
    // }
    
    // Write a C program to find the largest among three numbers using nested if-else statements.

    int a,b,c;
    printf("Enter 3 number to find the largest among them? ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    // if (a > b) {
    //     if (a > c) {
    //         printf("A variable holds the largest number which is: %d", a);
    //     } else {
    //         printf("C variable holds the largest number which is: %d", c);
    //     }
    // } else if (b > c) {
    //     printf("B variable holds the largest number which is: %d", b);
    // } else {
    //     printf("C variable holds the largest number which is: %d", c);
    // }
    
    // Another Way of Solving this.
    
    if (a > b && a > c) {
        printf("A variable holds the largest number which is: %d", a);
    } else if (b > c) {
        printf("B variable holds the largest number which is: %d", b);
    } else {
        printf("C variable holds the largest number which is: %d", c);
    }

    return 0;
}
