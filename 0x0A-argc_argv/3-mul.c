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
	int sum = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
