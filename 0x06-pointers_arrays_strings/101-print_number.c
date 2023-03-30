#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	while (num / div >= 10)
		div *= 10;

	while (div >= 1)
	{
		_putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
}
