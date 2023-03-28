#include "main.h"

/**
 * *_strcpy - Copies string.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n = strlen(src);
	int i;

	for (i = 0; i <= n; i++)
		dest[i] = src[i];

	return (dest);
}
