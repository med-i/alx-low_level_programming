#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int n = strlen(str);
	int i = n % 2 == 0 ? n / 2 : (n - 1) / 2;

	for (i++; i < n; i++)
		_putchar(str[i]);

	_putchar('\n');
}

