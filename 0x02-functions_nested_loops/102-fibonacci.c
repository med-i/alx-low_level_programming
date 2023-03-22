#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;
	long fn;
	long fn1 = 1;
	long fn2 = 0;

	for (i = 2; i <= 51; i++)
	{
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;

		printf("%ld", fn);

		if (i < 51)
			printf(", ");
	}

	printf("\n");

	return (0);
}

