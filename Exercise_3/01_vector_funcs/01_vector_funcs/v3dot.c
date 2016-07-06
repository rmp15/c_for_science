#include <math.h>

int v3dot(double * v1, double * v2)
{
    double v3 = v1[0]*v2[0] +v1[1]*v2[1] + v1[2]*v2[2];
    return v3;
}
