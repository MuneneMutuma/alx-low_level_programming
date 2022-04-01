#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for the program prints out the name of the program
 *
 * @argc: number of arguements in the commandline
 * @argv: arguement vector
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void) argc;
	return (0);
}
