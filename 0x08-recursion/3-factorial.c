#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: The number
 *
 * Return: the factorial of the given number or -1 if error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
