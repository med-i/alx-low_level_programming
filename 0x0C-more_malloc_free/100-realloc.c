#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: previously allocated memory.
 * @old_size: size of allocated space for ptr.
 * @new_size: size of the new memory block.
 *
 * Return: pointer to the ne memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reaptr;
	char *p = (char *)ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	reaptr = malloc(new_size);

	for (i = 0; i < old_size; i++)
	{
		reaptr[i] = p[i];
	}

	return (reaptr);
}
