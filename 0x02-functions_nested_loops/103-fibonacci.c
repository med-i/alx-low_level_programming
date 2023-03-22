#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;
	long fn, fn1, fn2, sum;

	while (1)
	{
		if (i == 2)
		{
			fn = 1;
			fn1 = 1;
			fn2 = 0;
		}
		else
		{
			fn2 = fn1;
			fn1 = fn;
			fn = fn1 + fn2;
		}

		if (fn > 4000000)
			break;

		i++;

		if (fn % 2 == 0)
			sum += fn;
	}

	printf("%ld\n", sum);

	return (0);
}

