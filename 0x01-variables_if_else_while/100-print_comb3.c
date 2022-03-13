#include <stdio.h>

/**
 * main - prints all possible different
 * combination of three digit
 * Return: Always 0 (Success)
 */

int main(void)
{

	for (int a = 0; a <= 9; a++)
	{
		for (int b = a + 1; b <= 9; b++)
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
