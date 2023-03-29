#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer. Otherwise 0;
 */
int _atoi(char *s)
{
	int len = 0;
	int sign = 1;
	int got_number = 0;
	int number = 0;
	int i;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		char c = s[i];

		if (!got_number && c == '-')
			sign *= -1;

		if (c >= 48 && c <= 57)
		{
			int digit = c - '0';

			number = number * 10 + digit;
			got_number = 1;
		}
		else if (got_number)
			break;
	}

	return (number * sign);
}
