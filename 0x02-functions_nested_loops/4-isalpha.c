#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: The character to check.
 *
 * Return: 1 if the character is a letter. 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

