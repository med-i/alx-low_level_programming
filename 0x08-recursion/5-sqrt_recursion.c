#include "main.h"

/**
 * find_sqrt - calculates the natural square root of a number.
 * @n: the number to calculate its square root.
 * @square: the possible square root.
 *
 * Return: the square root of n, otherwise -1.
 */
int find_sqrt(int n, int square)
{
	int res = square * square;

	if (res == n)
		return (square);
	else if (res > n)
		return (-1);

	return (find_sqrt(n, ++square));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to calculate its square root.
 *
 * Return: the square root of n.
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}
