
#include "main.h"

/**
 * main - Entry point.
 *
 * Return: 0.
 */
int main(void)
{
	char pass[99];
	int sum = 0;
	int i = 0;

	srand(time(0));

	while (sum < 2772)
	{
		char c = (char)(rand() % 94 + 33);

		pass[i] = c;
		sum += c;
		i++;
	}

	pass[i] = (char)(2772 - sum);

	printf("%s\n", pass);

	return (0);
}
