#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: the first argument
 * @src: The second argument
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
