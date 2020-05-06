#include <stdio.h>
#include <stdlib.h>

int main() 
{
	FILE *fptr;

	const char *filename = "/home/ompodjol/github_repos/WindTalker/src/coursera/c_for_everyone/elephant_seal_data.txt";	
	
	/* Open the file*/
	fptr = fopen(filename, "r");
	if(fptr == NULL) {
		printf("\nCannot open file \n");
		exit(0);
	}	

	/* Read contents from file */
	char c = fgetc(fptr);
	while(c != EOF) {
		printf("%c", c);
		c = fgetc(fptr);	
	}
	fclose(fptr);
	return 0;

}
