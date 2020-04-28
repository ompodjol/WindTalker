#include <stdio.h>

int square(int);

int cube(int x)
{
	return (x * x * x);
}

int main()
{	
	int input = 3;
	printf("cube of %d is : %d\n", input, cube(input));
	printf("square of %d is : %d\n", input, square(input));
	return 0;
}

int square(int x)
{
	return (x * x);
}
