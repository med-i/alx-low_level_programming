#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, r, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;

			if (r > 9)
				_putchar('0' + r / 10);

			_putchar('0' + r % 10);

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');

				n = i * (j + 1);

				if (n < 10)
					_putchar(' ');
			}
		}

		_putchar('\n');
	}
}

