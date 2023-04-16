#include "main.h"

/**
 * count_words - counts the number of words in a string.
 * @str: the string to count its words.
 *
 * Return: the count of words in str.
 */
int count_words(char *str)
{
	int i, is_word_start = 1, count = 0;

	for (i = 0; str[i]; i++)
		if (isblank(str[i]))
			is_word_start = 1;
		else
		{
			count += is_word_start ? 1 : 0;
			is_word_start = 0;
		}

	return (count);
}

/**
 * count_chars - counts the lenth of each word of a string.
 * @str: the string to count the length of it words.
 * @wrd_c: the number of words of the string.
 *
 * Return: an array of lengths of the words in str.
 */
int *count_chars(char *str, int wrd_c)
{
	int *chr_c = malloc(wrd_c);
	int i, j, is_word = 0, count = 0;

	for (i = 0, j = 0; str[i]; i++)
		if (!isblank(str[i]))
		{
			count++;
			is_word = 1;
		}
		else if (is_word)
		{
			chr_c[j++] = count;
			count = 0;
			is_word = 0;
		}

	return (chr_c);
}

/**
 * strtow - splits a string into words.
 * @str: the string to split.
 *
 * Return: pointer to an array of words.
 */
char **strtow(char *str)
{
	int wrd_c, *chr_c;
	char **words;
	int i, j, k, is_word = 0;

	if (!str || !*str)
		return (NULL);

	wrd_c = count_words(str);
	chr_c = count_chars(str, wrd_c);
	words = malloc(wrd_c + 1);

	for (i = 0, j = 0, k = 0; str[i]; i++)
	{
		if (j >= wrd_c)
			break;

		if (!isblank(str[i]))
		{
			if (k == 0)
				words[j] = malloc(chr_c[j] + 1);

			words[j][k++] = str[i];
			is_word = 1;
		}
		else if (is_word)
		{
			words[j][k] = '\0';
			j++;
			k = 0;
			is_word = 0;
		}
	}

	words[wrd_c] = '\0';

	return (words);
}
