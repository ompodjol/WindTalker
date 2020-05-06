#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fptr;
	int wrd = 0;
	int charctr = 0;
	int char_count = 0;	

	int SIZE = 0;
	
	const char *filename = "/home/ompodjol/github_repos/WindTalker/src/coursera/c_for_everyone/elephant_seal_data.txt";

	fptr = fopen(filename, "r");
	if(fptr == NULL) {
		printf("\n File does not exist or can not be opened");
		exit(0);
	}
	char ch = fgetc(fptr);
	while(ch != EOF) {
		printf("%c", ch);
		char_count++;
                if(ch == '	' || ch == '\n') {
                        wrd++;
		}
		else if(ch != '	') {
			charctr++;
		}
	ch = fgetc(fptr);
  	}
	//printf("I am here...");
	printf("word count is %d\n", wrd);
	printf("Length of the string in the file is = %d\n", char_count);
	fclose(fptr);
	return 0;
}
