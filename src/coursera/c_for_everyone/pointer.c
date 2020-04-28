#include <stdio.h>

int main()
{
	int average = 88.67;
	int sum = 100;
	int item = 1;
	
	int *p = &average;

	printf("%d\n", average);
	printf("%d\n", &average);
	printf("%d\n", *p);
	return 0;
	
}
