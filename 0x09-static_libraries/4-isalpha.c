#include "main.h"

/**
 * _isalpha - Checks if the character is a letter or not
 * @c: The caharacter to be checked
 * Return: 1 if it's a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
