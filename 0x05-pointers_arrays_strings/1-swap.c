#include "main.h"

/**
 * swap_int - Swaps the values of two numbers
 * @a: First number
 * @b: Second number
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
