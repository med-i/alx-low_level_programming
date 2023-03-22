#include "main.h"

/**
 * print_times_table - Write a function that prints the n times table,
 * starting with 0.
 * @n: The number to print.
 */
void print_times_table(int n)
{
	int i, j, r;

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
				print_space(i, j);
		}

		_putchar('\n');
	}
}

/**
 * print_space - Printa ',' and ' '.
 * @i: rows.
 * @j: columns.
 */
void print_space(int i, int j)
{
	int nr = i * (j + 1);

	_putchar(',');
	_putchar(' ');

	if (nr < 100)
		_putchar(' ');

	if (nr < 10)
		_putchar(' ');
}

