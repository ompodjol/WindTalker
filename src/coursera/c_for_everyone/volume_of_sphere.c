#include <stdio.h>

#define PI 3.14159

int main()
{
	double radius, volume;
	printf("Please enter radius of the sphere: ");
	scanf("%lg", &radius);
	volume = (4*PI*radius*radius*radius)/3.0;
	printf("volume is : %g \n\n", volume );
	return 0;
}
