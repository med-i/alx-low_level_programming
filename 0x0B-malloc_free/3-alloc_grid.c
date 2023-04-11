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
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(width * sizeof(int *));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(height * sizeof(int));
		if (!arr[i])
		{
			for (j = 0; j < i; j++)
				free(arr[j]);

			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;

	return (arr);
}
