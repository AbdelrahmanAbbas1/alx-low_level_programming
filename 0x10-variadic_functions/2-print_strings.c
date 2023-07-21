#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *cur_s = va_arg(args, char *);

		if (i == n - 1 || separator == NULL)
			printf("%s", cur_s);
		else
			printf("%s%s", cur_s == NULL ? "(nil)" : cur_s, separator);
	}
	printf("\n");
	va_end(args);
}
