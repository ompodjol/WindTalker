#include <stdio.h>

int main(void)
{
	double mult = 3 * 5;
	printf("mult = 3 * 5 is  %f\n", mult);	

	double mult_add = 3 * 5 + 2;
        printf("mult_add = 3 * 5 + 2 is %f\n", mult_add);

        double mult_paren = 3 * (5 + 2);
        printf("mult_paren = 3 * (5 + 2) is %f\n", mult_paren);

        double percent = 3 % 5;
        printf("percent = 3 % 5 is %f\n", percent);

        double percent_2 = 5 % 3;
        printf("percent_2 = 5 % 3 is %f\n", percent_2);

        double negative_percent = -5 % 3;
        printf("negative_percent = -5 % 3 is %f\n", negative_percent);

        double less_than_add = 5 < 7 + 2;
        printf("less_than_add = 5 < 7 + 2 is %f\n", less_than_add);

        double less_than_add_2 = 7 < 5 * 2;
        printf("less_than_add_2 = 7 < 5 * 2 is %f\n", less_than_add_2);

        double paren_less_than_add = (5 < 7) + 2;
        printf("paren_less_than_add = (5 < 7) + 2 is %f\n", paren_less_than_add);

        double equals_equals = 8 == -8;
        printf("equals_equals = 8 == -8 is %f\n", equals_equals);

        double equals_equals_2 = 8==-(8);
        printf("equals_equals_2 = 8==-(8) is %f\n", equals_equals_2);

        double equals_equals_3 = 8 == +8;
        printf("equals_equals_3 = 8 == +8 is %f\n", equals_equals_3);

        double divide = 3 / 5;
        printf("divide = 3 / 5 is %f\n", divide);

        double divide_2 = 3.0 / 5;
        printf("divide_2 = 3.0 / 5 is %f\n", divide_2);

        double divide_3 = 3 / 5.0;
        printf("divide_3 = 3 / 5.0 is %f\n", divide_3);
 
	return 0;
}
