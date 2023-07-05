#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The first argument
 * @needle: The second argument
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (k = 0; haystack[k] != '\0'; k++)
		{
			if (haystack[k] == needle[i])
			{
				return (&needle[i]);
			}
		}
	}
	return (0);
}
