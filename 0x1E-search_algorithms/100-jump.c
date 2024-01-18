#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the first index where value is located, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0, i;

	if (!array)
		return (-1);

	while (prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

		prev += step;
		if (array[prev] >= value)
		{
			prev -= step;
			break;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev - step, prev);

	for (i = prev; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
