#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; __FILE__[i] != '\0'; i++)
	{
		_putchar(__FILE__[i]);
	}
	_putchar('\0');
	_putchar('\n');

	return (0);
}
