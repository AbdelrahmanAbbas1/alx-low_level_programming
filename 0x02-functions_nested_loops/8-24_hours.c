#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */
void jack_bauer(void)
{
	int one_m;
	int ten_m;
	int one_h;
	int ten_h;

	for (ten_h = 0; ten_h < 3; ten_h++)
	{
		for (one_h = 0; one_h < 10; one_h++)
		{
			for (ten_m = 0; ten_m < 6; ten_m++)
			{
				for (one_m = 0; one_m < 10; one_m++)
				{
					_putchar('0' + ten_h);
					_putchar('0' + one_h);
					_putchar(':');
					_putchar('0' + ten_m);
					_putchar('0' + one_m);
					_putchar('\n');
					if (ten_h == 2 && one_h == 3 && ten_m == 5 && one_m == 9)
					{
						return;
					}
				}
			}
		}
	}
}
