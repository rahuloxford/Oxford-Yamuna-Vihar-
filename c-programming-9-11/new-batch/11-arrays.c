
#include <stdio.h>

int main() {

  // Store 5 rollnos.
  // int rno1 = 78;
  // int rno2 = 54;
  // int rno3 = 10;
  // int rno4 = 47;
  // int rno5 = 99;

  // int rnos[] = {78, 54, 10, 47, 99, 25, 10, 77};
  // int len = sizeof(rnos) / sizeof(rnos[0]);
  
  // rnos[2] = 43; // changeable

  // for (int i = 0; i < len; i++) {
  //   printf("%d ", rnos[i]);
  // }

  // printf("%d ", rnos[0]);
  // printf("%d ", rnos[1]);
  // printf("%d ", rnos[2]);
  // printf("%d ", rnos[3]);
  // printf("%d ", rnos[4]);


  int nums[6];
  int len = sizeof(nums) / sizeof(nums[0]);
  for (int i = 0; i < len; i++) {
    scanf("%d", &nums[i]);
  }

  for (int i = 0; i < len; i++) {
    printf("%d ", nums[i]);
  }


  // nums[0] = 90;

  return 0;
}