#include "main.h"

/**
 * times_table - prints teh 9 times table
 */
void times_table(void)
{
	int row;
	int col;
	int sum;
	int l_digit;
	int f_digit;

	for (col = 0; col < 10; col++)
	{
		for (row = 0; row < 10; row++)
		{
			sum = row * col;
			l_digit = sum % 10;
			if (sum > 9)
			{
				sum = sum / 10;
				f_digit = sum % 10;
				_putchar('0' + f_digit);
				_putchar('0' + l_digit);
			}
			else
			{
				_putchar('0' + sum);
			}
			if (row == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (row * col <= 9)
				{
					_putchar(' ');
				}
			}
		}
	}
}
