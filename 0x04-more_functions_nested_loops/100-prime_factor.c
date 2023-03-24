#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	long n = 612852475143;
	long i = 2;

	while (1)
	{
		if (n % i != 0)
		{
			i++;

			if (i == n)
			{
				printf("%ld\n", i);
				break;
			}

			continue;
		}

		n /= i;
	}

	return (0);
}
