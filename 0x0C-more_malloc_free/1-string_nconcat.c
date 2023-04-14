#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * @n: number of bytes of s2 to concatenate.
 *
 * Return: pointer to concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1, len2;
	char *str;

	len1 = strlen(s1);
	len2 = n >= strlen(s2) ? strlen(s2) : n;

	str = malloc(len1 + len2 + 1);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];

	for (j = 0; j < len2; j++)
		str[i++] = s2[j];

	return (str);
}
