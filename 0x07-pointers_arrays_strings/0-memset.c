#include "main.h"
#include <stdio.h>
/**
 * _memset - Fills the memory with a constant byte
 * @s: The first argument
 * @b: The second argument
 * @n: THe third argument
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
