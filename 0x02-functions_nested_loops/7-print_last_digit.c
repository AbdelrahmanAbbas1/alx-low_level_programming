#include "main.h"

/**
* print_last_digit - Pritns the last digit of a number
* @n: The argument
* Return: the last digit
*/
int print_last_digit(int n)
{
	int result;

	if (n < 0)
	{
		result = n % 10;
		return (-result);
	}
	else
	{
	result = n % 10;
	return (result);
	}
}
