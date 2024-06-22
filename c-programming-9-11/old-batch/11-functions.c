#include <stdio.h>

void set_values(int nums[], int length) {
	for (int i = 0; i < length; ++i)
	{
		/* code */
		scanf("%d", &nums[i]);
	}
}

void print_nums_values(int nums[], int length) {
	for (int i = 0; i < length; ++i)
	{
		/* code */
		printf("%d | ", nums[i]);
	}
}

int main()
{
	int nums[3];
	int length = sizeof(nums) / sizeof(nums[0]);

	set_values(nums, length);

	print_nums_values(nums, length);

	return 0;
}