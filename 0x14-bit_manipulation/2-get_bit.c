#include "main.h"
#include <stdlib.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to be converted to binary
 * @index: The position of the bit to be returned
 *
 * Return: The value of the bit at a given index or -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int current;

	if (index > 63)
		return (-1);

	current = n >> index;
	return (current & 1);
}
