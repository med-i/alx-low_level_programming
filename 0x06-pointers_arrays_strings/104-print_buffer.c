#include "main.h"

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to be printed.
 * @size: The size to print.
 */
void print_buffer(char *b, int size)
{
	int i;
	int len = 0;

	while (b[len] < size)
	{
		printf("%p: ", b + len);

		for (i = len; i < len + 10; i++)
		{
			printf("%02x", b[i]);

			if (i > len && i % 2 != 0)
			{
				printf(" ");
			}
		}

		for (i = len; i < len + 10; i++)
		{
			printf("%c", b[i]);
		}

		printf("\n");

		len += 10;
	}
}
