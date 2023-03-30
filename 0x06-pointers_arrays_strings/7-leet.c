#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (str[i] != '\0')
	{
		char c = str[i];

		while (letters[j] != '\0')
		{
			if (c == letters[j])
			{
				str[i] = numbers[j];
				break;
			}

			j++;
		}

		j = 0;
		i++;
	}

	return (str);
}
