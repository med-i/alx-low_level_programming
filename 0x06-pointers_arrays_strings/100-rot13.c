#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				str[i] = rot13[j];
				break;
			}

			j++;
		}

		j = 0;
		i++;
	}

	return (str);
}
