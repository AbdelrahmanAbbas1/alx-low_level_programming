#include "main.h"

/**
 * _strcpy - Copies the string
 * @dest: The first argument
 * @src: The second argument
 *
 * Return: returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len2 = 0;
	int i;

	while (src[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i <= len2; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
