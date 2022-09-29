#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * Description: main-prints alphabet in lowercase.
 * Return: 0 if success
 */

int main(void)
{

	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	putchar(lowercase);
	putchar('\n');
	return (0);
}
