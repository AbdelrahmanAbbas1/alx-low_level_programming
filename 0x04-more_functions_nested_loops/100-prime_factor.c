#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int i;

	while (n % 2 == 0)
	{
		n = n / 2;
	}
	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	if (n > 2)
	{
		printf("%ld\n", n);
	}
	return (0);
}
