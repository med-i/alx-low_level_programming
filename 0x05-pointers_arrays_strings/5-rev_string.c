#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int n = strlen(s);
	int i = 0;
	int j = n - 1;

	while (i < n / 2)
	{
		char tmp;

		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;

		i++;
		j--;
	}
}
