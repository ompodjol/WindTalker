/*
C for Everyone
Homage to K&R
Conversion of Fahrenheit to Celius

C = (F - 32)/1.8
Jolly and Sally Coder
2020-04-20
*/

#include <stdio.h>

int main(void)
{
	int fahrenheit, celsius;

	printf("Please enter fahrenheit as an integer:");
	scanf("%d", &fahrenheit);
	celsius = (fahrenheit -32)/1.8;  //note conversion
	printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);
	return 0;
}
