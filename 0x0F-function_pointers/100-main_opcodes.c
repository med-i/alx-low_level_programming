#include "function_pointers.h"

/**
 * main - prints the opcodes of its own main function.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 *
 * Return:
 * 0 if successful,
 * 1 if the number of arguments is wrong,
 * 2 if the number of bytes is negative.
 */
int main(int argc, char **argv)
{
	int num_of_bytes, i;
	unsigned char *bytes = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_of_bytes = atoi(argv[1]);

	if (num_of_bytes < 0)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < num_of_bytes; i++)
		printf("%02x ", bytes[i]);

	printf("\n");

	return (0);
}
