#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The argument
 */
void print_rev(char *s)
{
	int i;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (k = i; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
