#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set byt
 *
 * @s: first occurance in string
 * @accept: matches one of the bytes or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return (NULL);
}
