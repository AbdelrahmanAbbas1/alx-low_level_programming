#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the numebr of bytes in src
 *
 * Return: The destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
