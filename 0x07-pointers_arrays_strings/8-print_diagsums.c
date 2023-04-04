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



a[0][0] + offset

j 	0	1	2
i
0	0	1	5		i = 0	j = 2		a[0][2]


1	10	11	12		i = 1	j = 1		a[1][1]


2	1000	101	102		i = 2	j = 0		a[2][0]

a[0][0]
0	1	2	3	4	5	6	7	8
0	1	5	10	11	12	1000	101	102
0x9	0x10	0x11	0x12	0x13	0x14	0x15	0x16	0x17

how to access the value at i = 2 and j = 1?

*(a + i * size + j)
&a[0][0] + 2 * 3 + 1
0x9 + 7 ==> 0x16



a[5] = {1,2 3,5,66}

1	2	3	5	66
0x9	0x10	0x11	0x12	0x13	

for ()
	for ()

main: a[0][0] + a[1][1] + a[2][2]


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


