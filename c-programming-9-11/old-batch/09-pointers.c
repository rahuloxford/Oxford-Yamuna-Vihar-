
#include <stdio.h>

int main()
{
    int age = 25;
    // printf("%d\n", age);
    // printf("%p\n", &age);
    
    int *ptr = &age;
    // Reference: Output the memory address of age with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);
    // Dereference: Output the value of age with the pointer (25)
    printf("Age : %d\n", *ptr);
    
    // *ptr = 78;
    // printf("Age : %d\n", age);


    return 0;
}
