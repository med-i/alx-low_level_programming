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

/*
0	1	5


10	11	12


1000	101	102


0	1	2	3	4	5	6	7	8
____________________________________________________________________
0	1	5	10	11	12	1000	101	102


(a + i * size + i)

a[0][0] = 0 * 3 + 0 = 0
a[0][1] = 0 * 3 + 1 = 1
a[0][2] = 0 * 3 + 2 = 2

a[1][0] = 1 * 3 + 0 = 3
a[1][1] = 1 * 3 + 1 = 4
a[1][2] = 1 * 3 + 2 = 5

a[2][0] = 2 * 3 + 0 = 6
a[2][1] = 2 * 3 + 1 = 7
a[2][2] = 2 * 3 + 2 = 8

*/
