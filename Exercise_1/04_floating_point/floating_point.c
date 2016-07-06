#include <stdio.h>
int main(void)
{
float x1=1.0e25 , x2=3.0e10, x3, x4, x5, x6;
x3 = x1 + x2;
x4 = x1 * x2;
x5 = x1 / x2;
x6 = x2 / x1;
printf("x3 to x6 = %f %f %f %f\n", x3, x4, x5, x6);
return 0;
}
