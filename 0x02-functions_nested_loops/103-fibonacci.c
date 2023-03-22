#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int sum;
	long fn;
	long fn_1 = 1;
	long fn_2 = 0;

	while (1)
	{
		fn = fn_1 + fn_2;
		fn_2 = fn_1;
		fn_1 = fn;

		if (fn > 4000000)
			break;

		if (fn % 2 == 0)
			sum += fn;
	}

	printf("%d\n", sum);

	return (0);
}

