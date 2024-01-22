#include "search_algos.h"

/**
 * linear_search - Search in an array linear search algorithm
 *
 * @array: A pointer to an array of integers
 * @size: The number of the elements in array
 * @value: The value to search for
 *
 * Return: The first index of the value or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
