#include "main.h"

/**
 * string_toupper - changes lowecase to uppercase
 * @n: pointer
 * Return: char
 */
char *string_toupper(char *n)
{
	int q;

	q = 0;
	while (n[q] != '\0')
	{
		if (n[q] >= 'a' && n[q] <= 'z')
			n[q] = n[q] - 32;
		q++;
	}
	return (n);
}
