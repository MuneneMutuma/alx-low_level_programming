#include "main.h"

/**
 * print_alphabet - prints all the alphabet in small letters
 * users only putchar
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		_putchar(alphabet[i]);
	_putchar('\n');
}
