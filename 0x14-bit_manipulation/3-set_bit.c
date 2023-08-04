#include "main.h"
#include <stdlib.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: A pointer to the number
 * @index: The position of the bit to be changed
 *
 * Return: 1 or -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (1 << index) | *n;

	return (1);
}
