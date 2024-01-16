#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the first index where value is located, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index = -1;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			index = i;
			break;
		}
	}

	return (index);
}
