#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to copy.
 *
 * Return: pointer to the duplicate of str, otherwise NULL.
 */
char *_strdup(char *str)
{
	char *dupstr = malloc(strlen(str) + 1);
	int i;

	if (!dupstr)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		dupstr[i] = str[i];

	dupstr[i] = '\0';

	return (dupstr);
}
