#include "main.h"

/**
 * main - Entry point.
 *
 * Return: 0.
 */
int main(void)
{
	char *pass;
	int len;
	int i;

	srand(time(0));

	len = rand() % 15 + 6;

	pass = (char *)malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
		pass[i] = (char)(rand() % 94 + 33);

	printf("%s\n", pass);

	return (0);
}
