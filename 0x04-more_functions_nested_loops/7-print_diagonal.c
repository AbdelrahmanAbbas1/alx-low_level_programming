#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on teh terminal
 * @n: An argument
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
		_putcahr('\n');
	}
	else
	{
		_putchar('\n');
	}
}
