#include "main.h"

/**
 * handle_error - handles errors
 * @code: error code
 * @arg: argument to print
 */
void handle_error(int code, void *arg)
{
	switch (code)
	{
	case 97:
		dprintf(2, "Usage: cp file_from file_to\n");
		break;
	case 98:
		dprintf(2, "Error: Can't read from file %s", (char *)arg);
		break;
	case 99:
		dprintf(2, "Error: Can't write to %s", (char *)arg);
		break;
	case 100:
		dprintf(2, "Error: Can't close fd %d", *((int *)arg));
		break;
	}

	exit(code);
}

/**
 * main - copies the content of a file to another file
 * usage: cp file_from file_to
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 0 on success
 * 97 if ac is not correct
 * 98 if file_from doesn't exist or can't be read
 * 99 if file_to can't be created or written to
 * 100 if a file descriptor can't be closed
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r_bytes, w_bytes;
	char buffer[1024];

	if (ac != 3)
		handle_error(97, NULL);
	if (!av[1])
		handle_error(98, av[1]);
	if (!av[2])
		handle_error(99, av[2]);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		handle_error(98, av[1]);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		if (close(fd_from) == -1)
			handle_error(100, &fd_from);
		handle_error(99, av[2]);
	}

	while ((r_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			if (close(fd_from) == -1)
				handle_error(100, &fd_from);
			if (close(fd_to) == -1)
				handle_error(100, &fd_to);
			handle_error(99, av[2]);
		}
	}

	if (close(fd_from) == -1)
		handle_error(100, &fd_from);
	if (close(fd_to) == -1)
		handle_error(100, &fd_to);
	if (r_bytes == -1)
		handle_error(98, av[1]);
	return (0);
}
