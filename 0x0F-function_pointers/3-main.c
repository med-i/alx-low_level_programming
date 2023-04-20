#include "3-calc.h"

/**
 * main - performs simple arithmetic operations.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 *
 * Return:
 * is succesful,
 * if number of arguments is wrong,
 * if the operator is wrong,
 * if division by 0.
 */
int main(int argc, char **argv)
{
	int num1, num2, res, (*op_func)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	op_func = get_op_func(op);

	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}

	if (num2 == 0 && (!strcmp(op, "/") || !strcmp(op, "%")))
	{
		printf("Error\n");
		return (100);
	}

	res = op_func(num1, num2);
	printf("%d\n", res);

	return (0);
}
