#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *a;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * ((max - min) + 2));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	a[i] = '\0';
	return (a);
}
