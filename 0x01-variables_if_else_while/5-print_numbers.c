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
char *alphabet;
int length, i;

alphabet = "0123456789\n";
length = strlen(alphabet);

for (i = 0; i < length; i++)
putchar(alphabet[i]);

return (0);
}
