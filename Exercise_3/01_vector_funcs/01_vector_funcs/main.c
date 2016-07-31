#include <stdio.h>

// declare the functions which will be used
int v3dot(double * v1, double * v2);
void v3cross(double * v1, double * v2, double * v3);
void v3crosscross(double * v1, double * v2, double * v3, double * r);
void v3fprint (FILE * str, double * a);

int main(void)
{
    double v1[3], v2[3], v3[3], r[3];
    
    printf("Enter the first vector \n"
           "in the order v1[x], v1[y], v1[z], separated by spaces:");
    
    scanf("%lf %lf %lf", v1, v1+1, v1+2);

    printf("Enter the second vector \n"
           "in the order v2[x], v2[y], v2[z], separated by spaces:");
    
    scanf("%lf %lf %lf", v2, v2+1, v2+2);
    
    printf("Enter the third vector \n"
           "in the order v3[x], v3[y], v3[z], separated by spaces:");
    
   scanf("%lf %lf %lf", v3, v3+1, v3+2);
    
    printf("Dot product of first and second vector:\n");
    printf("v1.v2 = %d\n", v3dot(v1,v2));
    
    printf("Cross product of first and second vector:\n");
    v3cross(v1,v2,r);
    v3fprint(stdout,r);
    
    printf("Triple product of vectors:\n");
    v3crosscross(v1,v2,v3,r);
    v3fprint(stdout,r);
    
    return 0;
}