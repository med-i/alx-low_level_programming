#include <unistd.h>

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19".
 *
 * Return: Code 1.
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int length = sizeof(str) - 1;

	write(1, str, length);

	return (1);
}

