#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8 - 1;
	int has_leading_one = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			has_leading_one = 1;
		}
		else if (has_leading_one)
			_putchar('0');
	}
}
