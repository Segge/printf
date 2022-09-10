#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*Description:using main function this program prints numbers
*main-prints the strings in the printf function
*Return:0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if  (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
