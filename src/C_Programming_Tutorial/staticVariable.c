#include<stdio.h>

int increment()
{
	int x = 0;
	x++;
	printf("%d\n", x);
}

int incrementStaticVar()
{	//static variable is exist the entire program but works only within the bracket located or situated.
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
