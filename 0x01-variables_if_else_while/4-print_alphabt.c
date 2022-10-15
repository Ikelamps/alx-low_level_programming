#include <stdio.h>

/**
 * main - print lower case alphabets except q and e
 *
 * Reurn: Always 0 (Bravo)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
