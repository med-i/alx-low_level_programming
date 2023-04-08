#include "main.h"

/**
 * main - Entry point. This program multiplies two numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 if successful, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
