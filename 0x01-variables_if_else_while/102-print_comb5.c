#include <stdio.h>
#include <stdlib.h>
/**
 *Description:main-prints all possible combinations of two two-digit numbers
 *Return:0 if success
 *
 */
int main(void)
{
	int a, i, j, k;

	for (a = 48; a <= 57; a++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (j = 48; j <= 57; j++)
			{
				for (k = 48; k <= 57; k++)
				{
				if (((j + k) > (a + i) && j >= a) || a < j)
				{
				putchar(a);
				putchar(i);
				putchar(' ');
				putchar(j);
				putchar(k);
					if (a + i + j + k == 227 && a == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
