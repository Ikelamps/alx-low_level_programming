#include <stdio.h>

/**
 * main - print all single digit of base 10 from 0 using only
 * putchar without char variable
 *
 * Return: Always 0 (Bravo)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num % 10 + '0');
	putchar('\n');

	return (0);
}
