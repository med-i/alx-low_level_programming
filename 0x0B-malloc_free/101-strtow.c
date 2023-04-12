#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: the string to split.
 *
 * Return: pointer to an array of words.
 */
char **strtow(char *str)
{
	int i = 0, j;
	int words_count;
	int was_counted = 0;
	char **words;

	if (!str || !*str)
		return (NULL);

	while (str[i++])
	{
		if (isspace(str[i]))
		{
			was_counted = 1;
			continue;
		}

		if (was_counted && str[i] != '\0')
		{
			words_count++;
			was_counted = 0;
		}
	}

	words = malloc(words_count * sizeof(char *));
	if (!words)
	{
		free(words);
		return (NULL);
	}

	for (i = 0, j = 0; i < words_count; i++)
	{
		while (str[j++])
		{
			if (isspace(str[j]))
			{
				was_counted = 1;
				continue;
			}

			if (was_counted && str[j] != '\0')
			{
				words[i] += str[j];
				was_counted = 0;
			}
		}

		words[i] += '\0';
	}

	return (words);
}
