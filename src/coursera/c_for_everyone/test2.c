#include <stdio.h>

int main(void)
{
	int a[1000];
	
	int i;

	double sum=0;
	float ave=0;

	a=fopen("elephant_seal_data.txt", "r");

	for(i = 0; i < 1000; i++) {
		sum = sum+a[i];
	}

	ave = sum / 1000;

	printf("the average is %f:",ave);
	
	return 0;
}
