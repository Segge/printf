#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
*Description: main-prints out the strings to stdout
*Return: 0 if success
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%i ", n);
printf("is positive\n");
}
else if (n < 0)
{
printf("%i ", n);
printf("is negative\n");
}
else
{
printf("%i ", n);
printf("is zero\n");
}
return (0);
}
