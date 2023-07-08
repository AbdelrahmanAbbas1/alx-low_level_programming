#include "main.h"

/**
 * _islower - checks if the parameter is lower case or not
 * @c: the character to be checked
 * Return: 1 if the character is lower case, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
