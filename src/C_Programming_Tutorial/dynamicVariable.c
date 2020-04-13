#include<stdio.h>

int increment()
{
	int x = 0;
	x++;
	printf("%d\n", x);
}

int incrementStaticVar()
{
	int static x = 100;
	x++;
	printf("%d\n", x);
}

int main()
{
	increment();
	increment();
	increment();
	incrementStaticVar();
	incrementStaticVar();
	incrementStaticVar();
	return 0;
}
