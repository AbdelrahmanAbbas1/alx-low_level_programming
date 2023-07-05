#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (!*s)
	{
		return (0);
	}
	i++;
	return (i + _strlen_recursion(s + 1));
}
