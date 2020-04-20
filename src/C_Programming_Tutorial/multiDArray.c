#include<stdio.h>

int main()
{
	const int rows = 3;
	const int columns = 4;

	int studentGrades[rows][columns] = {
		{1, 3, 4, 6},
		{3, 2, 4, 8},
		{32, 2, 4 5}
	};

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns; j++)
		{
			printf("%d ", studentGrades[i][j]);
		}
		printf("\n");
	}
	return 0;
}
