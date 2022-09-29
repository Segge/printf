#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Description: main-prints the alphabet in lowercase, followed by a new line.
 * Return: 0 if success
 */
int main(void)
{
char lowercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	if (lowercase != 'e' && lowercase != 'q')
		putchar(lowercase);
			putchar('\n');
				return (0);
}
