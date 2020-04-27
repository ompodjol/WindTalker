/*
	This code display sine and cosine table between (0,1)
	2020-04-24
	by:jompod
*/

#include <stdio.h>
#include <math.h>

int sine_function()
{
	double interval = 0;
	double sine_output, cosine_output;
	printf("x       sin(x)  cos(x)\n");
	while (interval <= 1)
	{
		sine_output = sin(interval);
		cosine_output = cos(interval);
		printf("%.2f	%.2f	%.2f\n", interval, sine_output, cosine_output);
		interval = interval + 0.03;
	}
	return 0;
}


int main()
{
	sine_function();
/*	double input, sine_output;
	do
	{
		printf("Enter a value between 0 and 1: ");
                scanf("%lf", &input);
                sine_output = sin(input);
                printf("The sine output of %lg is %lg\n", input, sine_output);
	}
	while ( (input < 0) || (input > 1) );
	printf("You've got the assignment requirement input range!!! :) \n");
*/
	return 0;
}
