#include "variadic_functions.h"

/**
 * print_char - prints characters.
 * @c: the character to print.
 */
void print_char(char c)
{
	printf("%c", c);
}

/**
 * print_int - prints integers.
 * @i: the integer to print.
 */
void print_int(int i)
{
	printf("%i", i);
}

/**
 * print_float - prints floats.
 * @f: the float to print.
 */
void print_float(float f)
{
	printf("%f", f);
}

/**
 * print_str - prints strings.
 * @s: the string to print.
 */
void print_str(char *s)
{
	if (!s)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - prints anything.
 * @format: the list of types of arguments.
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	int i = 0, n = strlen(format), is_valid = 1;

	va_start(ap, format);

	while (i < n)
	{
		switch (format[i])
		{
		case 'c':
			print_char(va_arg(ap, int));
			break;
		case 'i':
			print_int(va_arg(ap, int));
			break;
		case 'f':
			print_float(va_arg(ap, double));
			break;
		case 's':
			print_str(va_arg(ap, char *));
			break;
		default:
			is_valid = 0;
		}

		if (i < n && is_valid)
			printf(", ");

		is_valid = 1;
		i++;
	}

	printf("\n");
	va_end(ap);
}
