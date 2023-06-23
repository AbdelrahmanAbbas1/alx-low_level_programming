#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: An argument
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
