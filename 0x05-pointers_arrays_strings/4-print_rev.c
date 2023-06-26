#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The argument
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	int k;
	for (k = i; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
