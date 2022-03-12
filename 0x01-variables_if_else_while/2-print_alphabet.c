#include <stdio.h>

/**
 * main - Prints the alphatbet in lowercase
 * follow by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
