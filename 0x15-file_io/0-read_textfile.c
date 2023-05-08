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
	char buf[1024];
	int read_bytes = 0;
	int count = 0;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_bytes = read(fd, buf, letters);
	count = write(STDOUT_FILENO, buf, read_bytes);

	close(fd);
	return (count == -1 ? 0 : count);
}
