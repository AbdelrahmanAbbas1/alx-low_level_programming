#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int c, x, i = 0;
	va_list args;
	double f;
	char *s, *sep = "";

	va_start(args, format);
	if (format != NULL)
	{
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", sep, c);
				break;
			case 'i':
				x = va_arg(args, int);
				printf("%s%d", sep, x);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%s%f", sep, f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	}
	printf("\n");
	va_end(args);
}
