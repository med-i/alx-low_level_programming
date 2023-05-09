#include "main.h"

/**
 * print_error_and_exit - handles errors
 * @code: error code
 * @arg: argument to print
 */
void print_error_and_exit(int code, void *arg)
{
	switch (code)
	{
	case 97:
		dprintf(2, "Usage: cp file_from file_to\n");
		break;
	case 98:
		dprintf(2, "Error: Can't read from file %s\n", (char *)arg);
		break;
	case 99:
		dprintf(2, "Error: Can't write to %s\n", (char *)arg);
		break;
	case 100:
		dprintf(2, "Error: Can't close fd %d\n", *((int *)arg));
		break;
	}

	exit(code);
}

/**
 * open_src_file - opens a file to read
 * @filename: name of the file to open
 *
 * Return: file descriptor
 */
int open_src_file(char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		print_error_and_exit(98, filename);

	return (fd);
}

/**
 * open_des_file - opens a file to write
 * @filename: name of the file to open
 *
 * Return: file descriptor
 */
int open_des_file(char *filename)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
		print_error_and_exit(99, filename);

	return (fd);
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
		print_error_and_exit(97, NULL);

	fd_from = open_src_file(av[1]);
	fd_to = open_des_file(av[2]);

	while ((r_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);

		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			if (close(fd_from) == -1)
				print_error_and_exit(100, &fd_from);

			if (close(fd_to) == -1)
				print_error_and_exit(100, &fd_to);

			print_error_and_exit(99, av[2]);
		}
	}

	if (r_bytes == -1)
		print_error_and_exit(98, av[1]);

	if (close(fd_from) == -1)
		print_error_and_exit(100, &fd_from);

	if (close(fd_to) == -1)
		print_error_and_exit(100, &fd_to);

	return (0);
}
