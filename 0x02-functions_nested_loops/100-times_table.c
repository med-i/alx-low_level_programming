#include "main.h"

/**
 * print_times_table - Write a function that prints the n times table, starting with 0.
 * @n: The number to print.
 */
void print_times_table(int n)
{
	int i, j, r, nr;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r = i * j;

			if (r < 10)
			{
				_putchar('0' + r);
			}
			else
			{
				if (r >= 100)
				{
					_putchar('0' + r / 100);
					_putchar('0' + r / 10 % 10);
				}
				else
				{
					_putchar('0' + r / 10);
				}

				_putchar('0' + r % 10);
			}

			if (j < n)
			{
				_putchar(',');
				_putchar(' ');

				nr = i * (j + 1);

				if (nr < 100)
					_putchar(' ');

				if (nr < 10)
					_putchar(' ');
			}
		}

		_putchar('\n');
	}
}

