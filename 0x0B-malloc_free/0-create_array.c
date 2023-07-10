#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of characters
 * @size: The first argument
 * @c: The second argument
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
