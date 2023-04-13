#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size of the memory to allocate.
 *
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
	{
		free(ptr);
		exit(98);
	}

	return (ptr);
}
