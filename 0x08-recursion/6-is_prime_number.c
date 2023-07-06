#include "main.h"

int div(int n, int i);
/**
 * is_prime_number - Return 1 if it's prime number and 0 otherwise
 * @n: The number
 *
 * Return: 1 if it's prime number and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (div(n, n - 1));
}
/**
 * div - chacks if its's prime number or not
 * @n: The number
 * @i: Counter
 *
 * Return: The number if it's prime
 */
int div(int n, int i)
{
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	return (div(n, i - 1));
}
