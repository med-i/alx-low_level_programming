#include "operations.h"

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of subtracting b from a.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of dividing a by b.
 *         If b is 0, returns 0 to avoid division by zero.
 */
int div(int a, int b)
{
	return (b == 0 ? 0 : a / b);
}

/**
 * mod - Computes the remainder of division of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of dividing a by b.
 */
int mod(int a, int b)
{
	return (a % b);
}
