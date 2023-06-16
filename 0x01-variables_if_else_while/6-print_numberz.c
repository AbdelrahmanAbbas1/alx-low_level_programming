#include <stdio.h>

/**
 * main - Prints numbers 0 - 9
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar((char)i);
	}
	putchar('\n');
	return (0);
}
