#include <stdio.h>
int main(void)
{
int low = -40, high = 140, step = 5, f, c = low;
while (c <= high)
{
f = 32+9*c/5;
printf("%6d \t %6d\n", c, f);
c = c + step;
}
return 0;
}
