#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to 2 dimenstional array
 * @width: Width of the matrix
 * @height: Height of the matrix
 *
 * Return: a pointer to a 2 dimensional array or NULL otherwise
 */
int **alloc_grid(int width, int height)
{
	int i, k;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(a[k]);
			}
			free(a);
			return (NULL);
		}
		else
		{
		for (k = 0; k < width; k++)
		{
			a[i][k] = 0;
		}
		}
	}
	return (a);
}
