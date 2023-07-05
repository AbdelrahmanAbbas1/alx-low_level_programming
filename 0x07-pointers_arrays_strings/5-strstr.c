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
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack && *n && (*haystack == *n))
		{
			haystack++;
			n++;
		}
		if (!*n)
		{
			return (h);
		}
		haystack++;
	}
	return (0);
}
