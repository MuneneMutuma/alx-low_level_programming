#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for the program
 *	- prints out the number of commandline arguements
 *
 * @argc: arguements count
 * @argv: arguement vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;

	return (0);
}
