#include "main.h"

/**
 * main - Entry point. This program adds positive numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!isnumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * isnumber - checks if a string is a number.
 * @str: the string to check.
 *
 * Return: 1 if stre is a number, otherwise 0.
 */
int isnumber(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[0] == '-')
			continue;

		if (!isdigit(str[i]))
			return (0);
	}

	return (1);
}
