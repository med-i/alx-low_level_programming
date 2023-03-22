#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i, sum;
	long fn2 = 0;
	long fn1 = 1;
	long fn = fn2 + fn1;

	while (1)
	{
		fn2 = fn1;
		fn1 = fn;
		fn = fn1 + fn2;

		if (fn > 4000000)
			break;

		if (fn % 2 == 0)
			sum += fn;
	}

	printf("%d\n", sum);

	return (0);
}

