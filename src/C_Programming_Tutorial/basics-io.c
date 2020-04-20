#include<stdio.h>

int main()
{
	printf("Hello World\n");

	int x = 50;
	int y; //declaration
	y = 10; //initialization

	printf("%s World\n", "Hello");
	printf("The value of y is %d \n", y);


	printf("Enter radius: ");
	int radius;
	scanf("%d", &radius); //address-of-operator (pointer)
	printf("The radius you enter is %d \n", radius);

	char name[20]; //char array of 20 characters. '\0' takes one spot
	printf("What is your name? :");
	scanf("%19s\n", name);
	printf("Your name is %s\n", name);

	return 0;
}
