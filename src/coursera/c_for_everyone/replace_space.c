
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char const *filename = "/home/ompodjol/github_repos/WindTalker/src/coursera/c_for_everyone/test.txt";

//FILE *fptr;

int read_a_file()
{
	FILE *fptr;
	
	fptr = fopen(filename, "r");

	char ch = fgetc(fptr);
	while(ch != EOF) {
		printf("%c", ch);
		ch = fgetc(fptr);
	}
	fclose(fptr);
//	printf("%s", ch);
	return 0;
}

/* int replace_space()
{
	FILE *fptr;	

	fptr = fopen(filename, "r");
	
	char ch = fgetc(fptr);
	while(ch != EOF) {
		printf("%c", ch);
	}
	ch = fgetc(fptr);
	fclose(fptr);
	return 0;
} */

int main()
{
//	char const *filename = "/home/ompodjol/github_repos/WindTalker/src/coursera/c_for_everyone/test.txt";	

	read_a_file();
	return 0;
}
