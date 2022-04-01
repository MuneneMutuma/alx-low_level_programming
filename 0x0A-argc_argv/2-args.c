#include <stdio.h>

/**
 * main - entry point for the program, prints out all cli arguments
 *
 * @argc: arguments count
 * @argv: arguements vector
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
