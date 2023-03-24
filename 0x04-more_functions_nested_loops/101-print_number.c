#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The number to print.
 */
void print_number(int n)
{
	int temp;
	int div = 1;
	int d;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	temp = n;

	while (temp > 0)
	{
		temp /= 10;
		div *= 10;
	}

	div /= 10;
	temp = n;

	while (temp > 0)
	{
		d = temp / div;
		_putchar('0' + d);
		temp %= div;
		div /= 10;
	}
}

