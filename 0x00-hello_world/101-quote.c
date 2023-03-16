#include <unistd.h>

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19".
 *
 * Return: Code 1.
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" ";
	char author[] = "- Dora Korpar, 2015-10-19\n";

	int length = sizeof(quote) - 1;

	write(1, quote, length);

	length = sizeof(author) - 1;

	write(1, author, length);

	return (1);
}

