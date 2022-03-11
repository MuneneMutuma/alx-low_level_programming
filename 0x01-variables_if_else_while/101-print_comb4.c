#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function will print all possible different combinations of two digits
 *      - but the two digits must be different
 *      - and permutations are not allowed e.g print only 12 and not 21
 *      - in the case of permutations, print the smaller number
 * Return: 0 for success
 */
int main(void)
{
int i, j, k;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i < 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
