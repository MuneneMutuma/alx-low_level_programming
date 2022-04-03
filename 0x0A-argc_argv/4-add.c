#include <stdlib.h>
#include <stdio.h>


/**
 * is_digit - a function that takes in a string and checks if it is a digit
 *
 * @s: string
 *
 * Return: 0 if true, 1 if false
 */
int is_digit(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] > '9' || s[i] < '0')
		{
			return (1);
		}

		i++;
	}

	return (0);
}


/**
 * main - entry point for the program
 *	- adds two numbers
 *	- if no number is passed prints 0
 *	- if one number contains a non digit symbol, prints out `Error`
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful
 *	   1 if any of the numbers is not a number
 */
int main(int argc, char *argv[])
{
	int sum;

	while (--argc)
	{
		if (is_digit(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}
