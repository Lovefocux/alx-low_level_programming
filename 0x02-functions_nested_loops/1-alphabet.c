#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 *
 */

void print_alphabet(void)
{
	char h;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(h);
		ch++;
	}
	_putchar('\n');
}
