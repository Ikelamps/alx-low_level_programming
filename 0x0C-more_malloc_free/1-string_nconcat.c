#include "main.h"

/**
 * string_nconcat - a function that concentrates two strings
 * @s1: first character
 * @s2: second character
 * @n: unsigned integer
 * Return: if it fails is shd return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *s;

	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s1[x]; ++x)
			;
	}
	if (s2 == Null)
	{
		y = 0;
	}
	if (y > n)
		y = n;
	s = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		s[z] = s1[z];
	for (z = 0; z < y; z++)
		s[z + x] = s2[z];
	s[x + y] = '\0';
	return (s);
}
