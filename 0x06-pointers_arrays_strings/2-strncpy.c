#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to copy
 *
 * Return: The destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int len2 = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}
	while (dest[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[len2] = '\0';
	return (dest);
}
