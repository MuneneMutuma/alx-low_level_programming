#include <stdlib.h>
#include <stdio.h>

/**
 * main - finds the name of the file a program was compiled from
 *
 * Return: 0 always
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
