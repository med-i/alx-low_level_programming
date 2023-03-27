#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int len = strlen(str) + 1;
	int mid = len % 2 == 0 ? len / 2 : (len - 1) / 2;
	int i;

	for (i = mid; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
