#include <stdio.h>
#include <math.h>

int main()
{
	double input, sine_output;
	do
	{
		printf("Enter a value between 0 and 1: ");
                scanf("%lf", &input);
                sine_output = sin(input);
                printf("The sine output of %lg is %lg\n", input, sine_output);
	}
	while ( (input < 0) || (input > 1) );
	printf("You've got the assignment requirement input range!!! :) \n");
	return 0;
}
