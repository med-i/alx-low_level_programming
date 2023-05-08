#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int read_bytes, write_bytes;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	read_bytes = read(fd, buf, letters);
	write_bytes = write(STDOUT_FILENO, buf, read_bytes);

	close(fd);
	return (write_bytes == -1 ? 0 : write_bytes);
}
