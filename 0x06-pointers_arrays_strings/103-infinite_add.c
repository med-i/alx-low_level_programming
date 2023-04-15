#include "main.h"

/**
 * reverse_str - reverses a string.
 * @str: the string to reverse.
 * @len: the length of str.
 */
void reverse_str(char *str, int len)
{
	int i;
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}

	str[len] = '\0';
}

/**
 * append_zeros - appends zeros to a string of numbers.
 * @num: the num to append zeros to.
 * @c_len: current length of num.
 * @t_len: target length of num.
 */
void append_zeros(char *num, int c_len, int t_len)
{
	int i;

	reverse_str(num, c_len);

	for (i = c_len; i < t_len; i++)
		num[i] = '0';
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *num1 = strdup(n1), *num2 = strdup(n2);
	int len1 = strlen(num1), len2 = strlen(num2);
	int i, len_r, res = 0, carry = 0;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	if (len1 < len2)
	{
		append_zeros(num1, len1, len2);
		reverse_str(num2, len2);
	}
	else if (len2 < len1)
	{
		append_zeros(num2, len2, len1);
		reverse_str(num1, len1);
	}
	else
	{
		reverse_str(num1, len1);
		reverse_str(num2, len2);
	}

	for (i = 0; num1[i]; i++)
	{
		res = num1[i] + num2[i] + carry - 96;
		carry = res / 10;
		r[i] = res % 10 + 48;
	}

	if (carry > 0)
		r[i++] = carry + 48;
	r[i] = '\0';

	len_r = strlen(r);
	if (len_r >= size_r)
		return (0);

	reverse_str(r, len_r);
	return (r);
}
