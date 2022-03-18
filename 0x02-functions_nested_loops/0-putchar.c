#include "main.h"

/**
 * main - entry point for the program
 *
 * Return: 0 if successful
 *
 *
 **/
int main(void)
{
	char string[8] = "_putchar";
	int i, length;

	length = sizeof(string) / sizeof(char);

	for (i = 0; i < length; i++)
		_putchar(string[i]);
	_putchar('\n');
	return (0);
}
