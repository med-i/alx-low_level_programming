#include "main.h"

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to be printed.
 * @size: The size to print.
 */
void print_buffer(char *b, int size)
{
	int i;
	int count;
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

		for (i = len; i < len + bytes; i++)
		{
			char c = b[i];

			if (c == '\0' || c == '\1' || c == '\2' || c == '\3' || c == '\4' || c == '\5' || c == '\6' || c == '\7' || c == '\n')
				printf(".");
			else
				printf("%c", b[i]);
		}

		printf("\n");

		if (size - len < 10)
			bytes = size - len;

		len += bytes;
	}
}
