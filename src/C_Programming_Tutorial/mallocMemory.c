#include<stdio.h>
#include<stdlib.h> //required for the memory functions
#include<stdbool.h>
#include<string.h>

typedef struct
{
	char name[30];
	int age;
	bool isVerified;
} user;

user *createUser(char name[], int age, bool isVerified)
{
	user *newUser = malloc(sizeof(user));
	strcpy(newUser->name, name);
	newUser->age = age;
	newUser->isVerified = isVerified;
	return newUser;
}

int main()
{
	int size;

	user *me = createUser("Caleb Curry", 72, false);

	printf("Caleb is %d years old!!\n", me->age);
	free (me);
	
	return 0;
}
