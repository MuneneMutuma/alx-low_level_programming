#include "main.h"

/**
 * jack_bauer - prints all minutes in a day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int H, M;

	H = 0;
	M = 0;

	while (H < 24)
	{
		M = 0;
		while (M < 60)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
			M++;
		}
		H++;
	}
}
