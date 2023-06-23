#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 */
void print_numbers(void)
{
	char start;

	for (start = '0'; start <= '9'; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
