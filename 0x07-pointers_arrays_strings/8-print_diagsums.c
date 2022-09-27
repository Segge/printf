#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints sum of two diagonals of a square matrix of int
 *@a: pointer
 *@size: for width of matrix column
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, l = 0, m = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		l += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - l - j);
		m += *(a + k);
	}
	printf("%i, %i\n", l, m);
}
