#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: The string
 *
 * Return: a pointer to the duplicated string or NULL otherwise
 */
char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *a;

	while (str[size] != '\0')
	{
		size++;
	}
	a = malloc(sizeof(char) * (size + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
