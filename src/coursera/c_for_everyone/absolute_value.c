/*
  small code to compute abs(sin(x)) from 0 to 50 intervals
  2020-04-24
  by:jompod
*/

#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */

int abs_value(int range)
{
	int pValue = range;
	printf("\nInterval	sin(x)		abs(sin(x))");
	for (int  i = 0; i < pValue; i++)
	{
		double interval = i/10.0;
		double sin_output = sin(i);
		double abs_output = fabs(sin_output);
		printf("\n%lf 	%lf 	%lf\t", interval, sin_output, abs_output);
	}
	printf("\n");
	return 0;
}

int main()
{ 
	int range = 50; //input of your intervals
	abs_value(range);
	return 0;
}
