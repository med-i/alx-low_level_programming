#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if:
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, pow, len;
	int i;

	if (!b)
		return (0);

	len = strlen(b) - 1;
	num = 0;
	pow = 1;

	for (i = len; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += (b[i] - '0') * pow;
		pow *= 2;
	}

	return (num);
}
