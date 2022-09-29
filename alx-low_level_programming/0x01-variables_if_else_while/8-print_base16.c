#include <stdio.h>
#include <stdlib.h>
/**
 *Description:main-prints all the numbers of base 16 in lowercase.
 *Return: 0 if success
 */
int main(void)
{
int base_16;

for (base_16 = 48; base_16 < 58; base_16++)
{
putchar(base_16);
}
for (base_16 = 97; base_16 < 103; base_16++)
{
putchar(base_16);
}
putchar('\n');
return (0);
}



