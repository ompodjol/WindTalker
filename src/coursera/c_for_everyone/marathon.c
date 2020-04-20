/*
The distance of a marathon in kilometers
Jolly and Sammy Coder
2020-04-20
*/

#include <stdio.h>

int main(void)
{
	int miles = 26, yards = 386;
	double kilometers;

	kilometers = 1.609 * (miles + yards / 1760.0);
	printf("\nA marathon is %lf kilometers.\n\n", kilometers);
	return 0;
}
