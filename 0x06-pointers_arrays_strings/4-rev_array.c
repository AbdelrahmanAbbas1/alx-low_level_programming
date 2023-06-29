#include "main.h"

/**
 * reverse_array - Reverse teh content of an array of integers
 * @a: The first argument
 * @n: The second argument
 */
void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n / 2; i++)
	{
		k = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = k;
	}
	a[n] = '\0';
}
