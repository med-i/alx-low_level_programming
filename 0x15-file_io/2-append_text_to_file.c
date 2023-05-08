#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at end of file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w_bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1 || !text_content)
		return (-1);

	w_bytes = write(fd, text_content, strlen(text_content));
	if (w_bytes == -1)
		return (-1);

	close(fd);
	return (1);
}
