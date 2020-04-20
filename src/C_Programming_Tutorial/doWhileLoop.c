#include<stdio.h>

int main()
{
	int input;
	do 
	{
		printf("Enter a number : ");
		scanf("%d", &input);
	}
	while (input < 0 || input > 9);
	
	return 0;
}
