#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: The string
 *
 * Return: The updated string
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if
			(
			 str[i] == 44 || str[i] == 95 || str[i] == 46 ||
			 str[i] == 33 || str[i] == 63 || str[i] == 34 ||
			 str[i] == 40 || str[i] == 41 || str[i] == 123 ||
			 str[i] == 125 || str[i] == 32 || str[i] == 9 ||
			 str[i] == 10 || str[i] == 13
			)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
