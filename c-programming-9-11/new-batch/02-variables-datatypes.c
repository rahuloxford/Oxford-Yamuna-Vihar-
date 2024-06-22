#include <stdio.h>

int main() {
	int a = 19; // int - 4 byte
	float b = 3.145; // float - 4 byte
	char c = 'h'; // char - 
	double d = 656.24485; // double - 8 byte

	printf("%d\n", a);
	printf("%f\n", b);
	printf("%c\n", c);
	printf("%lf\n", d);

	int number; // declaration
	// number = 1883; // initialization
	scanf("%d", &number);
	printf("The value of variable number is: %d\n", number);

	return 0;
}