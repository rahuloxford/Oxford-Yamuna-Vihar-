
#include <stdio.h>
#include <string.h>

int main()
{
    // Strings
    
    char letter = 'R';
    
    // One Way
    
    // char name[] = {'R', 'a', 'h', 'u', 'l', '\0'};
    
    // printf("%c", name[0]);
    
    // for (int i = 0; i < 6; i++) {
    //     printf("%c", name[i]);
    // }
    
    // Another Way
    
    // char fullname[] = "Rohit Singh";
    
    // int fnlen = strlen(fullname);
    
    // fullname[0] = 'M';
    
    // printf("%c\n", fullname[6]);
    
    // for (int i = 0; i < fnlen; i++) {
    //     printf("%c", fullname[i]);
    // }
    
    
    // SPECIAL CHARACTERS
    
    // char message[] = "I love \'java\' \n\tprogramming \\lang";
    
    // printf("%s\n", message);
    
    // CONCATENATE Strings
    
    // char str1[20] = "Hello ";
    // char str2[] = "World!";
    
    // Concatenate str2 to str1 (result is stored in str1)
    // strcat(str1, str2);
    
    // Print str1
    // printf("%s", str1);
    
    // COPY Strings
    
    // char str1[20] = "Hello World!";
    // char str2[20];
    
    // Copy str1 to str2
    // strcpy(str2, str1);
    
    // Print str2
    // printf("%s", str2);

    // COMPARE Strings
    
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";
    
    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)
    
    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)

    return 0;
}
