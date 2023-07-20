#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @ac: Arguments count
 * @av: Argument strings
 *
 * Return: 0 (Sucess) or otherwise in error
 */
int main(int ac, char **av)
{
	int num1, num2;
	char *op;
	(void)ac;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(av[1]);
	op = av[2];
	num2 = atoi(av[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
