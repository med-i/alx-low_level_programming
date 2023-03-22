#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;
	long fn, fn1, fn2;

	for (i = 2; i <= 50; i++)
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

		printf("%ld", fn);

		if (i < 50)
			printf(", ");
	}

	printf("\n");
}

