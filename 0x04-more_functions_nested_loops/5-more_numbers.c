#include "main.h"

/**
* more_numbers - Prints the numbers from 0 to 14 ten times
*/
void more_numbers(void)
{
	int i;
	char n;
	char t;
	char o;

	for (i = 0; i <= 10; i++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			_putchar(n);
			if (n == '9')
			{
				for (t = '1'; t <= '1'; t++)
				{
					for (o = '0'; o <= '4'; o++)
					{
						_putchar(t);
						_putchar(o);
					}
				}
			}
		}
		_putchar('\n');
	}
}
