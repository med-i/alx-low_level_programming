#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;
	unsigned long long fn;
	unsigned long long fn_1 = 1;
	unsigned long long fn_2 = 0;

	for (i = 2; i <= 99; i++)
	{
		fn = fn_1 + fn_2;
		fn_2 = fn_1;
		fn_1 = fn;

		printf("%llu", fn);

		if (i < 99)
			printf(", ");
	}

	printf("\n");

	return (0);
}
