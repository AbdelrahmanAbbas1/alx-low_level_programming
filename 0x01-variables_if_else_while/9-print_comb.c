#include <stdio.h>

/**
 * main - Prints single digit numbers seperated by comma
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar((char)i);
		if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
