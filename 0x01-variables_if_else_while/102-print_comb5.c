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

			if (a == b && c == d )
				continue;

			if (a == c && b == d)
				continue;

			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);

			if(a == 57 && b == 56 && c == 57 && d == 57)
				break;

			putchar(',');	
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

