#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments
 * @ac: Number of arguments
 * @av: Array of strings of arguments
 *
 * Return: a pointer to a new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, k;
	int index = 0;
	int len = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			len++;
		}
	}
	a = malloc(sizeof(char) * len);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			a[index] = av[i][k];
			index++;
		}
		a[index++] = '\n';
	}
	a[index] = '\0';
	return (a);
}
