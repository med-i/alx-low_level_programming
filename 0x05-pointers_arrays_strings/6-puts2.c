#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int n = strlen(str);
	int i;

	for (i = 0; i < n; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}

