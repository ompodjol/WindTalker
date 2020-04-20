#include<stdio.h>

typedef struct
{
	char first[20];
	char middle[20];
	char last[30];
} name;

typedef struct
{
	char house[50];
	char office[50];
} address;

typedef struct
{
	char mobile[20];
	char home[20];
} contact;

typedef struct
{
	name name;
	address address;
	contact contact;
} employee;


int main()
{
	employee myEmployee = { "Jolly Jae", "Omana", "Ompod", "Piongränd 13", "Tieto-Kista",
				"0725508919", ""};

	printf("First Name: %s\n"
		"Middle Name: %s\n"
		"Last Name: %s\n"
		"House Address: %s\n"
		"Office Address: %s\n"
		"Mobile Number: %s\n"
		"Home Number: %s\n",
					myEmployee.name.first,
					myEmployee.name.middle,
					myEmployee.name.last,
					myEmployee.address.house,
					myEmployee.address.office,
					myEmployee.contact.mobile,
					myEmployee.contact.home);

	return 0;
}
