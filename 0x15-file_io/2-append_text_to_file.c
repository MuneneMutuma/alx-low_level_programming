#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * append_text_to_file - appends text to file
 *
 * @filename: name of file to be appended
 * @text_content: content to be appended
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t res;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
		res = write(fd, text_content, 0);
	else
		res = write(fd, text_content, strlen(text_content));
	if (res == -1)
		return (-1);
	close(fd);
	return (1);
}
