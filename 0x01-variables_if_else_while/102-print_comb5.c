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
int i, j, k, l;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = i; k < 10; k++)
{
for (l = 0 ; l < 10; l++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
if (k > i)
{
putchar(l + '0');
}
if (k == i && l <= j)
{
l = j + 1;
putchar(l + '0');
}
else if (i != 9 || j != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
