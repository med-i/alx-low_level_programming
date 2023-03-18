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
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (i == j)
				continue;

			for (k = j; k < 10; k++)
			{
				if (j == k)
					continue;

				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);

				if (i == 7 && j == 8 && k == 9)
				break;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

