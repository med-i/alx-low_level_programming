#include "search_algos.h"

/**
 * print_array - prints the searched array.
 * @array: a pointer to the first element of the array to print.
 * @low: the start of the array.
 * @high: the end of the array.
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the first index where value is located, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid = 0;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
