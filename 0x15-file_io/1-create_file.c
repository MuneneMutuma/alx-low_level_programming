#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * create_file - creates a file
 *
 * @filename: filename to be created
 * @text_content: text to be written in the file
 *
 * Return: 1 if successful, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		write(fd, text_content, 0);
	else
		write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
