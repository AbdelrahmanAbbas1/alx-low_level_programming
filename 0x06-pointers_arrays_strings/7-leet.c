#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string
 *
 * Return: Te encoded string
 */
char *leet(char *str)
{
	int i;
	int k;
	char lee[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char enc[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; lee[k] != '\0'; k++)
		{
			if (str[i] == lee[k])
			{
				str[i] = '0' + enc[k];
			}
		}
	}
	return (str);
}
