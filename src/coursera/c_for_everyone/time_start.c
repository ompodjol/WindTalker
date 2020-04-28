#include <stdio.h>
#include <time.h>

int main()
{
	time_t current_time;
	char* local_format_time; 
	
	current_time = time(NULL);
	printf("current time : %ld\n\n", current_time);

	/* Convert to local time format */
	local_format_time = ctime(&current_time);
	printf("local format time : %s", local_format_time);
	return 0;
}
