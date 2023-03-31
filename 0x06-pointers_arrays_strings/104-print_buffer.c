#include "main.h"

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to be printed.
 * @size: The size to print.
 */
void print_buffer(char *b, int size)
{
	int len;
	int bytes = size < 10 ? size - 1 : 10;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (len = 0; len < size; len += 10)
	{
		printf("%08x: ", len);
		print_hex(b, size, len, bytes);
		print_chars(b, len, bytes);
		printf("\n");

		if (size - len - 10 < 10)
			bytes = size - len - 10;
	}
}

/**
 * print_hex - Prints hexadecimal.
 * @b: The buffer.
 * @size: The size of the buffer.
 * @len: The length of the buffer.
 * @bytes: Steps on each iteration.
 */
void print_hex(char *b, int size, int len, int bytes)
{
	int i;

	for (i = len; i < len + bytes; i += 2)
	{
		if (i < size)
			printf("%02x%02x ", b[i], b[i + 1]);
		else
			printf("%02x00 ", b[i]);
	}

	while (i % 10 > 0)
	{
		printf("     ");
		i += 2;
	}
}

/**
 * print_chars - Prints characters.
 * @b: The buffer.
 * @len: The length of the buffer.
 * @bytes: Steps on each iteration.
 */
void print_chars(char *b, int len, int bytes)
{
	int i;

	for (i = len; i < len + bytes; i++)
	{
		char c = b[i];

		if (c == '\0' || c == '\1' || c == '\2' || c == '\3' ||
		    c == '\4' || c == '\5' || c == '\6' || c == '\7' || c == '\n')
			printf(".");
		else
			printf("%c", c);
	}
}
