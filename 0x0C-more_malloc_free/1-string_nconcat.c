#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: Number of bytes to tak from s2
 *
 * Return: a pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, k = 0, len1 = 0, len2 = 0;
	char *a;

	while (s1 && s1[len1] != '\0')
		len1++;

	while (s2 && s2[len2] != '\0')
		len2++;

	if (n < len2)
	{
		a = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		a = malloc(sizeof(char) * (len1 + len2 + 1));
	}

	if (a == NULL)
		return (NULL);

	while (i < len1)
	{
		a[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		a[i] = s2[k];
		i++;
		k++;
	}
	while (n >= len2 && i < (len1 + len2))
	{
		a[i] = s2[k];
		i++;
		k++;
	}
	a[i] = '\0';
	return (a);
}
