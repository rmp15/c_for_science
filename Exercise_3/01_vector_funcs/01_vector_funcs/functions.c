#include <stdio.h>
#include <math.h>

int v3dot(double * v1, double * v2)
{
    double v3 = v1[0]*v2[0] +v1[1]*v2[1] + v1[2]*v2[2];
    return v3;
}

void v3cross(double * v1, double * v2, double * v3)
{
    v3[0] = v1[1]*v2[2]-v1[2]*v2[1];
    v3[1] = v1[2]*v2[0]-v1[0]*v2[2];
    v3[2] = v1[0]*v2[1]-v1[1]*v2[0];
}

void v3crosscross(double * v1, double * v2, double * v3, double * r)
{
    int ac=v3dot(v1,v3);
    int ab=v3dot(v1,v2);
    r[0]=ac*v2[0]-ab*v3[0];
    r[1]=ac*v2[1]-ab*v3[1];
    r[2]=ac*v2[2]-ab*v3[2];
}

//void v3fprint (FILE * str, double * a)
//{
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        fprintf(str, "( %5g )\n", *(a+i));
//    }
//}0

void v3fprint (FILE * str, double * a)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        fprintf(str, "( %5g )\n", *(a+i));
    }
}