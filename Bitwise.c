#include <stdio.h>

int main()
{
	// unsigned numbers have only positive values 
	unsigned int a = 60; // 0000 0000 0000 0000 0000 0000 0011 1100
	unsigned int b = 13; // 0000 1101
	int result1 = 0;
	int result2 = 0;
	int result3 = 0;
	int result4 = 0;
	int result5 = 0;
	int result6 = 0;

	result1 = a & b;
	// 0000 1100

	result2 = a | b;
	// 0011 1101

	result3 = a ^ b;
	// 0011 0001

	result4 = ~a;
	// 1100 0011

	result5 = a << 4;
	// 0000 0000 0000 0000 0000 0011 1100 0000

	result6 = a >> 4;
	// Depending on the system the size of integers now assumption: 32bits
	// 0000 0000 0000 0000 0000 0000 0000 0011

	printf("result1 is %d\n", result1);
	printf("result2 is %d\n", result2);
	printf("result3 is %d\n", result3);
	printf("result4 is %d\n", result4);
	printf("result5 is %d\n", result5);
	printf("result6 is %d\n", result6);



	return 0;
}
