#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Description: main-prints all single digit numbers of base 10 starting from 0
 * Return: 0 if success
 */
int main(void)
{
int d = 48;

while (d < 58)
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
