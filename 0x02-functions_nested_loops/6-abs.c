#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @num: The integer.
 *
 * Return: The absolute value num.
 */
int _abs(int num)
{
	if (num < 0)
		return (-1 * num);

	return (num);
}

