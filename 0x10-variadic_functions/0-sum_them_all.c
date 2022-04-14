#include <stdarg.h>
/**
 * sum_them_all - adds all the variables in a function
 *
 * @n: number of parameters to be added
 *
 * Return: 0 if n == 0, else the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum, i;

	sum = 0;
	va_start(ap, n);

	for (i = n; i > 0 ; i--)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
