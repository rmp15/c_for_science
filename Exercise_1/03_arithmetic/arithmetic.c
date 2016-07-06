#include <stdio.h>
int main(void) {
short i1=11111, i2=22222, i3, i4, i5, i6;
i3 = i1 + i2;
i4 = i1 * i2;
i5 = i1 / i2;
i6 = i2 / i1;
printf("i3 to i6 = %d %d %d %d\n", i3, i4, i5, i6);
return 0;
}
