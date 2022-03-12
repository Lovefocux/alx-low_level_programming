#include <stdio.h>

/**
 * main - print the lowercase alphabet
 * in reverse
 * follow by new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
