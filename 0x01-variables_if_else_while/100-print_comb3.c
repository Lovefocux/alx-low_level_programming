#include <stdio.h>

/**
 * main - prints all possible different
 * combination of three digit
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b,

	for (a = 0; a <= 10; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (((a * 10) + b) < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}