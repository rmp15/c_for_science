#include <stdio.h>
int main(void) {
int i1=1, i2=2222, i3=333333333;
float x1=1.0, x2=3.1415926, x3 = -1.e-10;
printf("i1, i2, i3 = %6d %6d %6d\n", i1, i2, i3);
printf("x1, x2, x3 = %10.2g %10.4g %10.6g\n", x1, x2, x3);
return 0;
}
