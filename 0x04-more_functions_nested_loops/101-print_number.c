#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The number to print.
 */
void print_number(int n)
{
	int div = 1;
	int temp;
	int is_min = 0;
	int c;

	if (n < 0)
	{
		_putchar('-');

		if (n == INT_MIN)
		{
			n = INT_MAX;
			is_min = 1;
		}
		else
			n = -n;
	}

	temp = n;

	while (temp >= 10)
	{
		temp /= 10;
		div *= 10;
	}

	temp = n;

	while (div >= 1)
	{
		c = 48 + temp / div;

		if (is_min && div == 1)
			c++;

		_putchar(c);
		temp %= div;
		div /= 10;
	}
}

