#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	double width = atoi(argv[1]);
	double height = atoi(argv[2]);
	double perimeter = 0.0;
	double area = 0.0;

	
	perimeter = 2.0 * (height + width);
	area = width * height;

	printf("Width is: %.2f, Height is: %f, Perimeter is: %f\n", width, height, perimeter);

	printf("Area is: %f\n", area);


	
	return 0;

}
