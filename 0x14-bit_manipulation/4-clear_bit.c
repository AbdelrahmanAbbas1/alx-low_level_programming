#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets teh calue of a bit to 0 at a given index
 * @n: A pointer to the number to be changed
 * @index: The position of the bit to be cleared
 *
 * Return: 1 or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1 << index)) & *n;
	return (1);
}
