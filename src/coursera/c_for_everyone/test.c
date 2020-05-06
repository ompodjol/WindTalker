#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
void sinecosine(double);   //function prototype
int main(void)
{
    int i;
    double value;
    for(i = 0; i <10; i++)
    {
        value= i/10.0;
        sinecosine(value);
    }
    return 0;
}
void sinecosine(double fvalue)        //function definition
{
//    double sineval,cosineval;
//    sineval=sin(fvalue);
//    cosineval=cos(fvalue);
//    printf("sine value for %lf  \t %lf ",fvalue,sineval);
//    printf("\tcosine value for %lf  \t %lf \n",fvalue,cosineval);
    printf("Hello\t\tWorld\n");
}
