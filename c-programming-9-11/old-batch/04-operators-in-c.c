
#include <stdio.h>

int main() {
    // ARITHEMETIC OPERATORS (+,-,*,/,%,++,--)
    int a = 11;
    int b = 3;
    
    // printf("%d\n", a + b);
    // printf("%d\n", a - b);
    // printf("%d\n", a * b);
    // printf("%d\n", a / b);
    
    // printf("%d\n", a % b); // modulas
    // a++;
    // printf("%d\n", a);
    // a++;
    // printf("%d\n", a);
    // a++;
    // printf("%d\n", a);
    // a--;
    // printf("%d\n", a);
    
    // printf("%d\n", ++a);
    // printf("%d\n", a);
    
    // COMPARISON OPERATORS (>,<,>=,<=,==,!=)
    
    // printf("%d\n", 8>5);
    // printf("%d\n", 17<15);
    // printf("%d\n", 8>=8);
    // printf("%d\n", 8<=8);
    // printf("%d\n", 8==8);
    // printf("%d\n", 8!=8);
    
    // LOGICAL OPERATORS (&&, ||, !)
    
    // && (and operator).
    // printf("%d\n", 7>4 && 7==7);
    // printf("%d\n", 7>4 && 7!=7);
    // printf("%d\n", 7<4 && 7==7);
    // printf("%d\n", 7<4 && 7!=7);
    
    // || (or operator).
    // printf("%d\n", 7>4 || 7==7);
    // printf("%d\n", 7>4 || 7!=7);
    // printf("%d\n", 7<4 || 7==7);
    // printf("%d\n", 7<4 || 7!=7);

    // ! (not operator).
    printf("%d\n", ! (7>10));

    a+=17; // a = a + 17
    a-=10; // a = a - 10
    a*=5; // a = a * 5
    a/=3; // a = a / 3
    printf("%d\n", a);

    return 0;
}