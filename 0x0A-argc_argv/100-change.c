#include "main.h"

/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	const int QUARTER = 25;
	const int DIME = 10;
	const int NICKEL = 5;
	const int TWOCENT = 2;
	const int PENNY = 1;

	int count = 0;
	int cents = 0;
	int *pcents = &cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (!isnumber(argv[1]))
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	count += cents_count(pcents, QUARTER);
	count += cents_count(pcents, DIME);
	count += cents_count(pcents, NICKEL);
	count += cents_count(pcents, TWOCENT);
	count += cents_count(pcents, PENNY);

	printf("%d\n", count);

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

/**
 * cents_count - calculates the number of a coin needed for change.
 * @pcents: pointer to the number of cents to change.
 * @coin: the coin to to use for change.
 *
 * Return: the number of the coin needed.
 */
int cents_count(int *pcents, const int coin)
{
	int count = 0;

	while (1)
	{
		if (*pcents - coin < 0)
			break;

		*pcents -= coin;
		count++;
	}

	return (count);
}
