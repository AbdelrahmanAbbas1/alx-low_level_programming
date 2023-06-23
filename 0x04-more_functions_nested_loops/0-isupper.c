#include "main.h"

/**
 * _isupper - Checks if the charater is uppercase
 * @c: the character to be checked
 * Return: 1 if it's uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
