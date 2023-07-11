#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: the concatenated string or NUll otherwise
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int k = 0;
	int len1 = 0;
	int len2 = 0;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	a = malloc(sizeof(char) * (len1 + len2));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			a[i] = s1[i];
		}
		else
		{
			a[i] = s2[k];
			k++;
		}
	}
	a[i + 1] = '\0';
	return (a);
}
