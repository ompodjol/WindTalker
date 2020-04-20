/*
Distance of a marathon in yards
ABC page 11 - variation
2020-04-20
*/

#include <stdio.h>

int main(void)
{
	int miles = 26, yards = 385;
	double kilometers;

	kilometers = 1.609 * (miles + yards/1760.0);
	printf("\nA marathon is %lf kilometers.\n", kilometers);

	yards = (miles * 1760.0) + yards;
	printf("\nA marathon is %d yards.\n", yards);
	return 0;
}
