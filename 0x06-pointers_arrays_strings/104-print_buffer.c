#include "main.h"

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to be printed.
 * @size: The size to print.
 */
void print_buffer(char *b, int size)
{
	int len = 0;
	int bytes = size < 10 ? size - 1 : 10;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (len < size)
	{
		printf("%p: ", b + len);

		print_hex(b, size, len, bytes);
		print_chars(b, len, bytes);

		printf("\n");

		if (size - len < 10)
			bytes = size - len;

		len += bytes;
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
	int count;

	for (i = len, count = 0; i < len + bytes; i++)
	{
		printf("%02x", b[i]);

		if (i % 2 != 0)
			printf(" ");

		count++;
	}

	if (i == size - 1 && i % 2 != 0)
	{
		printf("00");

		if (i % 2 != 0)
			printf(" ");

		count++;
	}

	while (count < 10)
	{
		printf("  ");

		if (count % 2 != 0)
			printf(" ");

		count++;
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
			printf("%c", b[i]);
	}
}
