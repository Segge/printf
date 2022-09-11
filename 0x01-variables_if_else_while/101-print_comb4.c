#include <stdio.h>
#include <stdlib.h>
/**
 *Decription:main-prints all different combinations of three digits.
 *Return: 0 if success
 *
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			for (k = j; k < 58; k++)
			{
				if (k == j || j == k || i == k)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 55 && j == 56 && k == 57)
				{
					break;
				}
putchar(',');
putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
