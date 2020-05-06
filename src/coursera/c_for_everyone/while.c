#include <stdio.h>

int mystery(int p, int q){
     
 	int r;
    	if ((r = p % q) == 0)
	{
		printf("%d\n", q);
        	return q; 
    	} else 
	return mystery(q, r);
	printf("%d\n", q);	
}

int main()
{
	mystery(7,91);
	return 0;
}
