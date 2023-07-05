#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: the stirng
 * @accept: the substring
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, k;
	int n = 0;
	int test;

	for (i = 0; s[i] != '\0'; i++)
	{
		test = 0;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (accept[k] == s[i])
			{
				n++;
				test++;
			}
		}
		if (test == 0)
		{
			break;
		}
	}
	return (n);
}
