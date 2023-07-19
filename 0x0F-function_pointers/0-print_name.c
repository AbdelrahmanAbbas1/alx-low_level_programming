#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: The name to be printed
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
