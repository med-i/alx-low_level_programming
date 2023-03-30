#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: Pointer to the capitalized string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || is_separator(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}

		i++;
	}

	return (str);
}

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a separator. 0 otherwise.
 */
int is_separator(char c)
{
	int i;
	char items[] = {' ',
			'\t',
			'\n',
			',',
			';',
			'.',
			'!',
			'?',
			'"',
			'(',
			')',
			'{',
			'}'};

	for (i = 0; i < 13; i++)
	{
		if (c == items[i])
			return (1);
	}

	return (0);
}
