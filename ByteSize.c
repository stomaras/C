// In this challenge, you are to create a C program that displays the byte size 
// of basic data types supported in C 
// The output varies depending on the system you are running the program 


// Display the byte size of the following types 

// int 
// char 
// long 
// long long
// double
// long double

// You can use the %zd format specifier to format each size 


// Use the sizeof operator 


// Test on more than one computer to see the differences

#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Variables of type char occupy %ld bytes\n", sizeof(char));
	printf("Variables of type short occupy %lu bytes\n", sizeof(short));
	printf("Variables of type int occupy %lu bytes\n", sizeof(int));
	printf("Variables of type long occupy %lu bytes\n", sizeof(long));
	printf("Variables of type long long occupy %lu bytes\n", sizeof(long long));
	printf("Variables of type float occupy %lu bytes\n", sizeof(float));
	printf("Variables of type double occupy %lu bytes\n", sizeof(double));
	printf("Variables of type long double occupy %lu bytes\n", sizeof(long double));

	return 0;
}
