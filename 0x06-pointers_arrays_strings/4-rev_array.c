#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: Number of the elements of the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
