#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Main Entry point
 * @ac: Number of arguments
 * @av: Strings of raguments
 *
 * Return: 0 (Success) or otherwise in failure
 */
int main(int ac, char **av)
{
	int i, k;
	int sum = 1;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			if (av[i][k] < 48 || av[i][k] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	for (i = 1; i < ac; i++)
	{
		sum *= atoi(av[i]);
	}
	printf("%d\n", sum);
	return (0);
}
