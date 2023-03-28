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

	while (total <= 2646)
	{
		char c = (char)(rand() % 94 + 33);

		pass[i] = c;
		total += c;
		i++;
	}

	pass[i] = (char)(2772 - total);

	printf("%s\n", pass);

	return (0);
}
