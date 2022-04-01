#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program, multiplies two numbers from argv
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful
 *	   1 if two arguments are not passed
 */
int main(int argc, char *argv[])
{
	int ans;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	ans = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", ans);

	return (0);
}
