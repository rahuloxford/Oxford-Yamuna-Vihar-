
#include <stdio.h>

int main()
{
    // Multidimensional Arrays
    
    int nums[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    
    // printf("%d\n", nums[2][1]); // 8
    // printf("%d\n", nums[2][0]); // 7
    // printf("%d\n", nums[1][1]); // 5
    
    // Iterate through this array using for loop
    
    // i = 0, 1, 2, 3 (break)
    // j = 0, 1, 2, 3 (break) => 1 time, j = 0, 1, 2, 3 (break) => 2 time, j = 0, 1, 2, 3
    
    
    // for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
    //     for (int j = 0; j < sizeof(nums[i]) / sizeof(nums[i][0]); j++) {
    //         printf("%d ", nums[i][j]);
    //     }
    //     printf("\n");
    // }
    
    
    // Advanced version
    // Input from the user.
    
    int arr[4][4];
    
    // Input
    
    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    //     for (int j = 0; j < sizeof(arr[i]) / sizeof(arr[i][0]); j++) {
    //         scanf("%d", &arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    
    // Output
    
    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    //     for (int j = 0; j < sizeof(arr[i]) / sizeof(arr[i][0]); j++) {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // int a;
    // printf("A is %d", a);
    
    
    
    
    
    
    // // *** THREE DIMENSIONAL ARRAYS ***
    
    // int numbers[2][3][4] = {
    //     {
    //         {1, 2, 3, 4},
    //         {5, 6, 7, 8},
    //         {34, 56, 78, 99}
    //     },
    //     {
    //         {9, 10, 11, 12},
    //         {13, 14, 15, 16},
    //         {12, 55, 33, 83}
    //     }
    // };
    
    
    // Output using for loop
    
    // for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
    //     for (int j = 0; j < sizeof(numbers[i]) / sizeof(numbers[i][0]); j++) {
    //         for (int k = 0; k < sizeof(numbers[i][j]) / sizeof(numbers[i][j][0]); k++) {
    //             printf("%d ", numbers[i][j][k]);
    //         }
    //         printf("\n");
    //     }
    // }
    
    
    char letters[2][2][2] = {
        {
            {'a', 'b'},
            {'c', 'd'}
        },
        {
            {'e', 'f'},
            {'g', 'h'}
        }
    };
    
    for (int i = 0; i < sizeof(letters) / sizeof(letters[0]); i++) {
        for (int j = 0; j < sizeof(letters[i]) / sizeof(letters[i][0]); j++) {
            for (int k = 0; k < sizeof(letters[i][j]) / sizeof(letters[i][j][0]); k++) {
                printf("%c ", letters[i][j][k]);
            }
            printf("\n");
        }
    }
    

    return 0;
}