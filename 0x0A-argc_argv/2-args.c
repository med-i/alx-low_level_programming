#include "main.h"

/**
 * main - Entry point. This program prints all arguments it receives.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
