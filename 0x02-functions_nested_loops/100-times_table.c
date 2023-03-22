#include "main.h"

/**
 * print_times_table - Write a function that prints the n times table,
 * starting with 0.
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

			if (r >= 10 && r <= 99)
			{
				_putchar('0' + r / 10);
			}
			else if (r >= 100)
			{
				_putchar('0' + r / 100);
				_putchar('0' + r / 10 % 10);
			}

			_putchar('0' + r % 10);

			if (j < n)
			{
				nr = i * (j + 1);

				_putchar(',');
				_putchar(' ');

				if (nr <= 99)
					_putchar(' ');

				if (nr <= 9)
					_putchar(' ');
			}
		}

		_putchar('\n');
	}
}

