
#include <stdio.h>

void greet_user(char naam[], int age);

void print_rollnos(int rnos[], int l) {
    for (int i = 0; i < l; i++) {
        /* code */
        printf("%d ", rnos[i]);
    }
}

int addition(int a, int b, int c) {
    return a + b + c;
}

int main()
{
    // greet_user("Rohit Rana", 21);
    // greet_user("John Smith", 48);
    // greet_user("Akash Kushwaha", 27);
    
    // Pass Arrays as Function Parameters
    int rollnos[] = {12,14,16,19,23,43,77,90};
    int len = sizeof(rollnos) / sizeof(rollnos[0]);
    print_rollnos(rollnos, len);
    
    printf("\n%d", addition(23,78,90));
    printf("\n%d", addition(10, 20, 30));
    return 0;
}

void greet_user(char naam[], int age) {
    printf("Hello Welcome, %s you are %d years old.\n", naam, age);
}