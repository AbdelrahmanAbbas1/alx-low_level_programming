#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			printf("%s", va_arg(args, char *));
		}
		if (format[i + 1] != '\0' &&
		(format[i + 1] == 'c' || format[i + 1] == 'i' ||
		 format[i + 1] == 'f' || format[i + 1] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
