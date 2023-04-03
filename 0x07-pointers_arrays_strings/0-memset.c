#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: The address of memory to fill.
 * @b: The constant byte to use.
 * @n: The number of bytes to fill.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;

	return (s);
}
