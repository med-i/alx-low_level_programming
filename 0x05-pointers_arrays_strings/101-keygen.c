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
	int i = 0;

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

	pass[i] = (char)(2772 - total);

	printf("%s\n", pass);

	return (0);
}
