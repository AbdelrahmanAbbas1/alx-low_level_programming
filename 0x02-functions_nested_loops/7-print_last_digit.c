#include "main.h"

/**
* print_last_digit - Pritns the last digit of a number
* @n: The argument
* Return: 0 (Success)
*/
int print_last_digit(int n)
{
	int res;

	if (n < 0)
	{
		res = -(n % 10);
		_putchar('0' + res);
		return (res);
	}
	else
	{
		res = n % 10;
		_putchar ('0' + res);
		return (res);
	}
}
