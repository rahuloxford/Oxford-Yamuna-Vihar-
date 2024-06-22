#include <stdio.h>
#include <stdbool.h>
int main()
{
    /*
    do {
        // code.
    } while (condition);
    */
    
    // int count = 1;
    // do {
    //     printf("Hello World\n");
    //     count++;
    // } while (count >= 10);
    
  /*
    for (int i = 1; i <= 10; i++) {
        // continue;
        // break;
        if (i == 3 || i == 5 || i == 7) {
            continue;
        }
        printf("%d\n", i);
        
    }
  */
    
    // while (true) {
    //     int i;
    //     scanf("%d", &i);
        
    //     if (i == -1) {
    //         break;
    //     }
    // }
    
    // NESTED LOOPS.
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}
