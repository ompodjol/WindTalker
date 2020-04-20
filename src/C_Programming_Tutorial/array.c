#include<stdio.h>

int main()
{
	int size = 8;
	int ages[] = {16, 54, 40, 4, 5, 9, 90, 76};
	
	for (int i = 0; i < size; i++)
	{
		printf("%d ", ages[i]);
	}

	printf("\n");
	ages[3] = 99;
	for (int i = 0; i < size; i++)
        {
                printf("%d ", ages[i]);
        }
	//first element - index 0
	//0-9
	return 0;
}
