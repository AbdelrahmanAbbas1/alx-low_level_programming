#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: Number of arguments
* @argv: Number of strings
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;
	int k;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (argv[i][k] < 48 || argv[i][k] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
