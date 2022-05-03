#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints out to stdout
 *
 * @filename: name of the file
 * @letters: number of letters to be read
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *buf;

	buf = malloc(letters + 1);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	count = read(fd, buf, letters);
	write(0, buf, count);

	close(fd);
	free(buf);
	return (count);
}
