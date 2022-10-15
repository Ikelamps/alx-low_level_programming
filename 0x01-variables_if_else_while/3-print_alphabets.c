#include <stdio.h>

/**
 * main - prints lowercase alphabet then uppercase
 *
 * Return: Always 0 (Bravo)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

		return (0);
}
