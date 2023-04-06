#include "main.h"

/**
 * check_equality - compares two characters at a time.
 * @s: the string to be checked.
 * @start: the index from the left.
 * @end: the index from the right.
 *
 * Return: 1 if each pair of characters are equal, 0 otherwise.
 */
int check_equality(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);

	if (start >= end)
		return (1);

	return (check_equality(s, ++start, --end));
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string to be checked.
 *
 * Return: 1 if s is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (check_equality(s, 0, strlen(s) - 1));
}
