#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the array.
 * @height: the height of the array.
 *
 * Return: pointer to array.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = calloc(width, sizeof(int *));
	if (!arr)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		arr[i] = calloc(height, sizeof(int));
		if (!arr)
		{
			fprintf(stderr, "Memory allocation failed!\n");
			return (NULL);
		}
	}

	return (arr);
}
