#include <stdio.h>
#include <stdlib.h>
/**
 *Description:main-prints all possible combinations of single-digit numbers
 *Return: 0 if success
 */
int main(void)
{
int digit;

for (digit = 48; digit < 58; digit++)
{
putchar(digit);
if (digit != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
