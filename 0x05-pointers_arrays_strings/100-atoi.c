#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer. Otherwise 0;
 */
int _atoi(char *s)
{
	int sign = 1;
	int got_number = 0;
	unsigned int number = 0;

	while (*s != '\0')
	{
		char c = *s;

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

		s++;
	}

	return (number * sign);
}
