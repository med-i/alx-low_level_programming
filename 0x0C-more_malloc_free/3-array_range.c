#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the starting point of the array (included).
 * @max: the end point of the array (included).
 *
 * Return: pointer to the created array.
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}

	for (i = min; i <= max; i++)
		arr[i] = i;

	return (arr);
}
