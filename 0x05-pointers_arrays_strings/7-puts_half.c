#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int len = 0;
	int mid = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	mid = len % 2 == 0 ? len / 2 : (len - 1) / 2;

	for (i = mid; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
