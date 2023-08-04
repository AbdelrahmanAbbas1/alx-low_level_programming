#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 if it's big or 1 if it's little
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	return (*c);
}
