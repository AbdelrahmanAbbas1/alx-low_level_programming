#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to power of y
 * @x: The first argument
 * @y: The second argument
 *
 * Return: the value of x raised to power of y or -1 if error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
