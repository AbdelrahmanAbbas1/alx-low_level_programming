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
	unsigned int i, k;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *a;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	a = malloc(sizeof(char) * (len1 + n + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		a[i] = s1[i];
	}
	for (k = 0; k < n; k++)
	{
		a[i + k] = s2[k];
	}
	if (n != len2)
	{
		a[i + k] = '\0';
	}
	return (a);
}
