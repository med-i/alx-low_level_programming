#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n; i++)
	{
		dest[len] = src[i];
		len++;

		if (src[i] == '\0')
			break;
	}

	return (dest);
}
