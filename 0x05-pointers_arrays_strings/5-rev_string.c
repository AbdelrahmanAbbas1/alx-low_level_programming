#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The argument
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char el;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= length / 2; i--)
	{
		el = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = el;
	}
}
