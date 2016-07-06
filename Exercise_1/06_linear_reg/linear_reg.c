#include <stdio.h>
int main(void)
{
double a0, a1;
float x;
    
printf("Enter coefficients of Linear Equation a1*x + a0 = 0\n"
"in the order a1, a0, separated by spaces:");
    
scanf("%lf %lf", &a1, &a0);
    
if(a1==0)
    {
        printf("Choose another value for a1, as there is no solution for this one:");
        scanf("%lf", &a1);
    }
    
x= -a0/a1;
    
printf("The solution to the equation is %f\n", x);
}
