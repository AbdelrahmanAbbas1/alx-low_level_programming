#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Excutes a function on each element of an array
 * @array: An array of integers
 * @size: Size of the array
 * @action: a pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array)
		return NULL;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}