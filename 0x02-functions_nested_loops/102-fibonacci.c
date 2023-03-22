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
	long fn_1 = 1;
	long fn_2 = 0;

	for (i = 2; i <= 51; i++)
	{
		fn = fn_1 + fn_2;
		fn_2 = fn_1;
		fn_1 = fn;

		printf("%ld", fn);

		if (i < 51)
			printf(", ");
	}

	printf("\n");

	return (0);
}

