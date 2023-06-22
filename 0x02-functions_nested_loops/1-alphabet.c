#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowe case
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
		char start;
		char end = 'z';

	for (start = 'a'; start <= end; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
