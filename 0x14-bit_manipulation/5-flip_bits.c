#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - Returns the number of the bits needed to be fliped
 * @n: The firest number
 * @m: The second number
 *
 * Return: The number of bits to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int bit = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i & 1) != (m >> i & 1))
			bit++;
	}
	return (bit);
}
