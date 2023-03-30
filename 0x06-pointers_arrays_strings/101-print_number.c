#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;
	int digit;
	char str[10];
	int len = 0;
	int i;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (num < 10)
	{
		_putchar('0' + num);
		return;
	}

	while (num > 0)
	{
		digit = num % 10;
		num /= 10;
		str[len] = '0' + digit;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);
}
