#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		n = n * -1;
		i = n;
		_putchar('-');
	}
	if ((i / 10) != 0)
	{
		print_number(i / 10);
	}
	_putchar('0' + ((unsigned int)n % 10));
}
