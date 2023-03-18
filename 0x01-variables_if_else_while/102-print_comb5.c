#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;
	int j;
	int a;
	int b;
	int c;
	int d;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			a = 48 + i / 10;
			b = 48 + i % 10;
			c = 48 + j / 10;
			d = 48 + j % 10;

			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);

			if (i == 98 && j == 99)
				break;

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}

