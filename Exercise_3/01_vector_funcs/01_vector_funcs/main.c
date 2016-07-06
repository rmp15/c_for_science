#include <stdio.h>
int v3dot(double * v1, double * v2);

int main(void)
{
    double v1[3], v2[3];
    
    printf("Enter the first vector \n"
           "in the order v1[x], v1[y], v1[z], separated by spaces:");
    
    scanf("%lf %lf %lf", v1, v1+1, v1+2);

    printf("Enter the second vector \n"
           "in the order v2[x], v2[y], v2[z], separated by spaces:");
    
    scanf("%lf %lf %lf", v2, v2+1, v2+2);
    
    printf("TDot product:\n");
    printf("v1.v2 = %d\n", v3dot(v1,v2));
    
    return 0;
}