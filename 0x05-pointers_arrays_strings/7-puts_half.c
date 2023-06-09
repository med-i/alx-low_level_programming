#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	else
		for (i = (len - 1) / 2; i < len - 1; i++)
			_putchar(str[i + 1]);

	_putchar('\n');
}
