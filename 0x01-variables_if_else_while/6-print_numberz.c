#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point for the program
 *      - prints out the alphabet using `putchar`
 *
 * Return: 0 if successful
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
