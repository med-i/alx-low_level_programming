#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		char chr = 97 + i;

		if (chr == 'e' || chr == 'q')
			continue;

		putchar(97 + i);
	}

	putchar('\n');

	return (0);
}

