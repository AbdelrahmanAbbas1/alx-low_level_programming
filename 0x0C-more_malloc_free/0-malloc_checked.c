#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: The argument
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		exit(98);
	}
	return (malloc(b));
}
