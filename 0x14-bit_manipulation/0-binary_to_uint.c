#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_to_uint - Converts a binary number to an usigned int
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: The converted number or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		res = (2 * res) + (b[i] - '0');
	}
	return (res);
}
