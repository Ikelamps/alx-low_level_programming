#include <stdio.h>

/**
 * main - print all possible combinations of two digit numbers
 * ranging froo 0 to 99 separated by comma followed by space
 *
 * Return: Always 0 (Bravo)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
	for (b = 0; b < 100; b++)
	{
		if (a < b)
		{
		putchar((a / 10) + 48);
		putchar((a % 10) + 48);
		putchar(' ');
		putchar((b / 10) + 48);
		putchar((b % 10) + 48);
		if (a != 98 || b != 99)
		{
		putchar(',');
		putchar(' ');
		}
		}
		}
		}
		putchar('\n');
		return (0);
}
