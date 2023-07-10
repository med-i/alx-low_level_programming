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
	int r_bytes, w_bytes;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	r_bytes = read(fd, buf, letters);
	w_bytes = write(STDOUT_FILENO, buf, r_bytes);

	close(fd);
	return (w_bytes == -1 ? 0 : w_bytes);
}
