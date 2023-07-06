#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number
 *
 * Return: The natural sq root of a number or -1 if error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Return the natural square of a root of a number
 * @n: The number
 * @i: The counter
 *
 * Return: The natural square or -1 if error
 */
int _sqrt(int n, int i)
{
	int res = i * i;

	if (res == n)
	{
		return (i);
	}
	else if (res > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
