#include "main.h"

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to be printed.
 * @size: The size to print.
 */
void print_buffer(char *b, int size)
{
	int len;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (len = 0; len < size; len += 10)
	{
		printf("%08x: ", len);
		print_hex(b, size, len);
		print_chars(b, size, len);
		printf("\n");
	}
}

/**
 * print_hex - Prints hexadecimal.
 * @b: The buffer.
 * @size: The size of the buffer.
 * @len: The length to print.
 */
void print_hex(char *b, int size, int len)
{
	int i;

	for (i = len; i < len + 10 && i < size; i += 2)
	{
		if (i + 1 < size)
			printf("%02x%02x ", b[i], b[i + 1]);
		else
		{
			printf("%02x", b[i]);
			printf("   ");
		}
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
 * @size: The size of the buffer.
 * @len: The length to print.
 */
void print_chars(char *b, int size, int len)
{
	int i;

	for (i = len; i < len + 10 && i < size; i++)
	{
		char c = b[i];

		if (c >= 32 && c <= 126)
			printf("%c", c);
		else
			printf(".");
	}
}
