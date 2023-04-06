#include "main.h"

/**
 * has_factor - checks if the input number has a factor.
 * @n: the number to be checked.
 * @factor: the factor to be checked.
 *
 * Return: 1 if n has no factor, 0 otherwise.
 */
int has_factor(int n, int factor)
{
	if (n % factor == 0)
		return (0);

	if (factor >= n / 2)
		return (1);

	return (has_factor(n, ++factor));
}

/**
 * is_prime_number - check if an integer is a prime number.
 * @n: the number to be checked.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (has_factor(n, 2));
}
