#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: a pointer a memory previously allocated
 * @old_size: The size of the allocated space for ptr
 * @new_size: The new size of the new memory block
 *
 * Return: a pointer with a new size or NULL otherwsie
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *a;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
	{
		a[i] = ((char *)ptr)[i];
	}
	return (a);

}
