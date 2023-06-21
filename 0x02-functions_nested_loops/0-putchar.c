#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main (void)
{
	char* name = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(name[i]);
	}
	putchar('\n');
	return (0);
}
