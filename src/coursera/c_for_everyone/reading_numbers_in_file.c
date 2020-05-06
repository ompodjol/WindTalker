/*
    C code to read a data file that is tab separated.
    Two functions, count_number_of_elements and write_into_array
    and the main function.
    Jolly Jae Ompod - 2020-05-05, Stockholm
*/

#include <stdio.h>
#include <stdlib.h>

FILE *elephant_file;

char const *filename = "/home/ompodjol/github_repos/WindTalker/src/coursera/c_for_everyone/elephant_seal_data.txt";

static int character_count = 0;
static int data_count = 0;
static double average_weight = 0.00;
static double total_weight = 0.00;

int count_number_of_elements()
{
	elephant_file = fopen(filename, "r");
	if(elephant_file == NULL) {
		printf("\n File does not exist or cannot be opened!!!\n");
		exit(0);
	}
	char ch = fgetc(elephant_file);
	while(ch != EOF) {
		//printf("%C", ch); /* disable the printing */
		character_count++;
		if(ch == '	' || ch == '\n') {
			data_count++;
		}
		else if(ch != '	') {
			character_count++;
		}
	ch = fgetc(elephant_file);
	}	
	printf("\nThere are %d records of elephant seal in the given data file.\n", data_count);
	return 0;
}

/* put into array list of all data found in the filename*/
int write_into_array()
{
    	//FILE *elephant_file;
    	elephant_file = fopen(filename, "r");

    	//read file into array
    	int numberArray[data_count];
    	int i;
    	if(elephant_file == NULL) {
        	printf("Error Reading File\n");
        	exit (0);
    	}
    	for(i = 0; i < data_count; i++) {
        	fscanf(elephant_file, "%d,", &numberArray[i] );
    	}
    	for(i = 0; i < data_count; i++) {
        	printf("%d\t", numberArray[i]);
    	}
    	fclose(elephant_file);
    	return 0;
}

/* compute the average weight of the given data in the file*/
int compute_average_weight()
{
	//FILE *elephant_file;
        elephant_file = fopen(filename, "r");
        //read file into array
        int weight_array[data_count];
        int i;
        if(elephant_file == NULL) {
                printf("Error Reading File\n");
                exit (0);
        }
        for(i = 0; i < data_count; i++) {
                fscanf(elephant_file, "%d,", &weight_array[i] );
		total_weight += weight_array[i];
		average_weight = (total_weight/data_count);
        }
	printf("\nThe total weight of all elephant seals is %.2f\n",total_weight);
	printf("\nThe average weight of all elephant seals is %.2f\n", average_weight);
        fclose(elephant_file);
        return 0;
}

int main()
{	
	count_number_of_elements(); /* step 1, determine count of elements in the array*/
	printf("\nRaw Data from the file(elephant_seal_data):\n");
	write_into_array();
	printf("\n\n");
	compute_average_weight();
	printf("\n\n");
	return 0;
}
