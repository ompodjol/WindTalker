#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCALLS 10000000
#define NCOLS 8
#define NLINES 3

int main(void)
{
	int i, val;
	long begin, diff, end;
	time_t local_time_1, local_time_2;

	begin = time(NULL);
	local_time_1 = time(NULL);
//	local_time_1 = ctime(&begin);
	srand(time(NULL));
	printf("\nlocal time => %s\n", ctime(&local_time_1));
	printf("\nTIMING TEST: %d calls to rand()\n\n", NCALLS);
	for(i = 1; i <= NCALLS; ++i) {
		val = rand();
		if (i <= NCOLS * NLINES) {
			printf("%7d\n\n", val);
	//		begin = time(NULL);
			if(i%NCOLS == 0) {
				putchar('\n');
			}
		}
		else if (i == NCOLS * NLINES +1) {
                                printf("%7s\n\n", ".....");
		}
	}
	end = time(NULL);
	diff = end - begin;
        local_time_2 = time(NULL);

	printf("local_time_2 => %s\n", ctime(&local_time_2));
	printf("%s%ld\n%s%ld\n%s%ld\n%s%.10f\n\n",
	"	end time: ", end,
	"      begin time: ", begin,
	"    elapsed time: ", diff,
	"  time for each call: ", (double) diff/NCALLS);
	return 0;
}
