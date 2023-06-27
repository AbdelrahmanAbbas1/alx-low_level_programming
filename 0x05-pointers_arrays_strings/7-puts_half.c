#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The argument
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) != 0)
	{
		i = ((len / 2) - 2);
	}
	else
	{
		i = len / 2;
	}
	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
