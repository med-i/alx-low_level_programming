#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: the string to print between strings.
 * @n: the number of parameters.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str)
			printf("%s", str);
		else
			printf("nil");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
