#include <unistd.h>

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19".
 *
 * Return: Code 1.
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int length = sizeof(text);

	write(1, text, length);

	return (1);
}

