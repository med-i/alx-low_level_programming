#include "main.h"

/**
 * compare - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * @idx1: index of s1.
 * @idx2: index of s2.
 *
 * Return: 1 if s1 equals s2, 0 otherwise.
 */
int compare(char *s1, char *s2, int idx1, int idx2)
{
	if (s2[idx2] == '*')
		idx2++;
	else if (s1[idx1] != s2[idx2] && s2[idx2] != '*')
		return (0);

	idx1++;
	idx2++;

	if (!s1[idx1])
		return (1);

	return (compare(s1, s2, idx1, idx2));
}

/**
 * wildcmp - checks if two strings are considered identical.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 1 if s1 and s2 can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	return (compare(s1, s2, 0, 0));
}
