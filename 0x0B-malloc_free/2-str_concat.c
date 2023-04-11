#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 *
 * Return: pointer to a new string containing s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	int size_s1 = strlen(s1);
	int size_s2 = strlen(s2);
	int size = size_s1 + size_s2 + 1;
	int i, j;

	char *constr = malloc(size);

	if (!constr)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		return (NULL);
	}

	for (i = 0; i < size_s1; i++)
		constr[i] = s1[i];

	for (j = 0; j < size_s2; j++)
		constr[i++] = s2[j];

	constr[i] = '\0';

	return (constr);
}
