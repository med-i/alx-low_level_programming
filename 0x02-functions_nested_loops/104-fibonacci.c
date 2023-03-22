#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;
	float fn;
	float fn_1 = 1;
	float fn_2 = 0;

	for (i = 2; i <= 99; i++)
	{
		fn = fn_1 + fn_2;
		fn_2 = fn_1;
		fn_1 = fn;

		printf("%.0f", fn);

		if (i < 99)
			printf(", ");
	}

	printf("\n");

	return (0);
}

