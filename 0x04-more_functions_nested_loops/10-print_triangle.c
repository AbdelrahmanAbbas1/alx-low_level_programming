#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (z = 1; z < size - y; z++)
			{
				_putchar(' ');
			}
			for (x = 0; x <= y; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
