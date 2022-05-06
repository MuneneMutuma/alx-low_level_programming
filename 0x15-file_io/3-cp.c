#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * copy_file - copies file, like cp
 *
 * @from: source file
 * @to: destination file
 *
 * Return: 0 on success
 */
int copy_file(const char *from, const char *to)
{
	int fd1, fd2, cl1, cl2;
	ssize_t rd_count, wr_count;
	char *buf;

	buf = malloc(1024);
	if (!from || !to)
		return (-1);

	fd1 = open(from, O_RDONLY);
	fd2 = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		rd_count = read(fd1, buf, 1024);
		wr_count = write(fd2, buf, rd_count);
	} while (rd_count > 0 && wr_count > 0);

	if (fd1 == -1 || rd_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", (char *)from);
		return (98);
	}
	if (fd2 == -1 || wr_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", (char *)to);
		return (99);
	}
	cl1 = close(fd1);
	cl2 = close(fd2);
	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close df %d\n", fd1);
		return (100);
	}
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close df %d\n", fd2);
		return (100);
	}
	return (0);
}

/**
 * main - entry point for the program
 *
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int exit_code;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	exit_code = copy_file(argv[1], argv[2]);
	if (exit_code != 0)
	{
		printf("Exit Code: %d\n", exit_code);
		exit(exit_code);
	}
	return (0);
}

