#include <stdio.h>

int main()
{
	int size = 10;
	char name_input[size];
	printf("Name Choices: Angel, Xan, Isaac\n");
	printf("\nEnter your name: ");
	scanf("%s", name_input[0]);
	switch (name_input)
	{
		case "Angel": printf("\nHi Angel Gabrielle She Razo Ompod\n"); break;
		case "Xan": printf("\nHi Xan Kenosis Razo Ompod\n"); break;
		case "Isaac": printf("\nHi Xan Isaac Razo Ompod\n"); break;
		default : printf("\nWrong name entered!");
	}
	return 0;
}
