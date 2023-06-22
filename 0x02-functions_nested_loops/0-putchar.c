#include "main.h"

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char *name = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
