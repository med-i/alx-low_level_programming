#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = size - 1 - i; j > 0; j--)
			_putchar(' ');

		for (k = i; k >= 0; k--)
			_putchar('#');

		_putchar('\n');
	}
}
