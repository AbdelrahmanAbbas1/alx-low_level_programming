#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on teh terminal
 * @n: An argument
 */
void print_diagonal(int n)
{
	int i;
	int k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
