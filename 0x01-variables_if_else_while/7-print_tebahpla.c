#include <stdio.h>

/**
 * main - print in reverse lower case alphabet
 *
 * Return: Always 0(Bravo)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
