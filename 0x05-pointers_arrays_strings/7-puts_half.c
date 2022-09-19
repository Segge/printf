#include "main.h"

/**
 *puts_half- function that print second half of the string
 *
 *@str: input string
 *Return:returns half of the string
 */
void puts_half(char *str)
{
	int lent = 0;

	while (*str != '\0')
	{
		lent++;
		str++;
	}
	str -= (lent / 2);
	while (*str != '\n')
	{
		_putchar(*str);
		str++;
	}
	 _putchar('\n');
}

