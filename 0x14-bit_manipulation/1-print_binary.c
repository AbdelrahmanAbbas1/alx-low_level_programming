#include "main.h"
#include <stdlib.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be converted
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if ((current & 1) == 0 && count != 0)
		{
			_putchar('0');
		}
	}
	if (count == 0)
		_putchar('0');
}
