#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonal
 * @a: the first argument
 * @size: the second argument
 */
void print_diagsums(int *a, int size)
{
	int i, k;
	int res1 = 0;
	int res2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		res1 = res1 + a[i];
	}
	for (k = size - 1; k <= (size * size) - size; k = k + size - 1)
	{
		res2 = res2 + a[k];
	}
	printf("%d, %d\n", res1, res2);
}
