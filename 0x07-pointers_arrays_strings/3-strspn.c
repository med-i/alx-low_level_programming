#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to check.
 * @accept: The bytes to match.
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;
	int has_bytes;

	for (i = 0; s[i]; i++)
	{
		has_bytes = 0;

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				has_bytes = 1;
				break;
			}
		}

		if (!has_bytes)
			break;
	}

	return (count);
}
