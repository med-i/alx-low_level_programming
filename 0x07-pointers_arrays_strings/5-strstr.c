#include "main.h"

/**
 * _strstr -Locates a substring.
 * @haystack: The string to check.
 * @needle: The substring to find.
 *
 * Return: Pointer to the beginning of the located substring.
 * Or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int start = 0;
	int has_str = 0;
	int sub_len = strlen(needle);

	for (i = 0; haystack[i]; i++)
		if (haystack[i] == needle[0])
		{
			start = i;

			for (j = 1; j < sub_len; j++)
			{
				if (haystack[++i] != needle[j])
				{
					has_str = 0;
					break;
				}

				has_str = 1;
			}

			if (has_str)
				return (haystack + start);
		}

	return (NULL);
}
