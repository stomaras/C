// In this challenge, you are to create a C program that defines an enum type and uses that
//type to display the values of some variables 
  
//The program should create an enum type named Company
//Valid values for this type are GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT
  
// The program should create three variables of the above enum type that are assigned values:
// XEROX,GOOGLE and EBAY

// The program should display as output, the value of the three variables with each variable
// seperated by a new line 

// Correct output would be if XEROX,GOOGLE, and EBAY variables are printed in that order:
// 2
// 0
// 4

#include<stdio.h>
#include<stdlib.h>

int main()
{

	// Company is a List 
	// In the C-Compiler those are represented as integers
	// So GOOGLE is 0, FACEBOOK is 1, XEROX is 2 e.t.c
	// Because YAHOO is 10 , EBAY is 11 and MICROSOFT = 12
	enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT } ;

	enum Company xerox = XEROX;
	enum Company google = GOOGLE;
	enum Company ebay = EBAY;

	printf("The value of xerox is: %d\n", xerox);
	printf("The value of google is: %d\n", google);
	printf("The value of ebay is: %d\n", ebay);
	

	return 0;
}

