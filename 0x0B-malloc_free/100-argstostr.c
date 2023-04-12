#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the number of argumens.
 * @av: the array of arguments.
 *
 * Return: pointer to a new string, otherwise NULL.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, n, size = 0, len;

	if (!ac || ac == 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		size += sizeof(av[i]);
	}

	str = malloc(size + ac + 1);

	for (i = 0, n = 0; i < ac; i++)
	{
		len = strlen(av[i]);

		for (j = 0; j < len; j++)
		{
			str[n++] = av[i][j];
		}

		str[n++] = '\n';
	}

	str[n] = '\0';

	return (str);
}
