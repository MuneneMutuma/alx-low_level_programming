#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers that are passed as arrays
 *
 * @separator: separator to split numbers in print
 * @n: number of integers to be passed to integer
 *
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = n ; i > 0; i--)
	{
		printf("%d", va_arg(ap, int));

		if (separator && i > 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
