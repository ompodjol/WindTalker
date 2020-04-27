/* 	Fundamental Types sizeof operator
   	Jolly and Sally Coder
   	2020-04-22		
*/

#include <stdio.h>

int main(void)
{
	int a = 5, b = 7, c = 6;
	double average = 0.0;
	char ch = 'e';

	printf("on my system\n");
	printf("int is %lu bytes.\n", sizeof(int));
	printf("long int is %lu bytes.\n", sizeof(long int));
	printf("char is %lu bytes.\n", sizeof(ch));
	printf("float is %lu bytes.\n", sizeof(float));
	printf("double is %lu bytes.\n", sizeof(double));
	printf("long double int is %lu bytes.\n", sizeof(long double));
	return 0;
}

