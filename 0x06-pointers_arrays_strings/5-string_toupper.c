#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be changed to uppercase.
 *
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		if (c >= 97 && c <= 122)
			str[i] -= 32;

		i++;
	}

	return (str);
}
