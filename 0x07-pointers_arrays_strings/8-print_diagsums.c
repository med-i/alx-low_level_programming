#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The array to print the sum of its diagonals.
 * @size: The size of the diagonal.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_main = 0;
	int sum_anti = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += *(a + i * size + i);
		sum_anti += *(a + (size - 1 - i) * size + i);
	}

	printf("%d, %d\n", sum_main, sum_anti);
}
