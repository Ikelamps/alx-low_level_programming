#include <stdio.h>

/**
 * main - prints out lower case alphabets
 *
 * Return: Always 0 (Bravo)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
