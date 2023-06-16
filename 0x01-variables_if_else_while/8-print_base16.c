#include <stdio.h>

/**
 * main - Prints numbers of base 16 in lower case
 * Return: 0 (Success)
 */
int main(void)
{
	char i;
	char a;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
