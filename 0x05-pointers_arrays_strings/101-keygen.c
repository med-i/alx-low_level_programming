#include "main.h"

/**
 * main - Entry point.
 *
 * Return: 0.
 */
int main(void)
{
	char pass[99];
	int total = 0;
	int i;

	srand(time(0));

	while (1)
	{
		char c = (char)(rand() % 94 + 33);

		if (total + c > 2739)
			break;

		total += c;
		pass[i] = c;
		i++;
	}

	char c = (char)(2772 - total);
	pass[++i] = c;
	total += c;

	printf("%s\n", pass);
	printf("%d\n", total);

	return (0);
}
