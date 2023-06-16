#include <stdio.h>

/**
 * main - Prints alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
