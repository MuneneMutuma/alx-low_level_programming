#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings that are passed as parameters
 *
 * @separator: the separator that will split strings in print
 * @n: the number of strings
 *
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = n; i > 0; i--)
	{
		printf("%s", va_arg(ap, char *));
		if (separator && i > 1)
		{
			printf("%s", separator);
		}
	}

	va_end(ap);

	printf("\n");
}
