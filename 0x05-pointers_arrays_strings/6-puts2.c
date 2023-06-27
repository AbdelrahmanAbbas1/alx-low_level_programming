#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The argument
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i++] != '\0')
		{
			_putchar(str[i]);
			i += 2;
		}
		else
		{
			i++;
		}
	}
	_putchar('\n');
}
