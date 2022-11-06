#include "main.h"

/**
 * _strchr - locates a char in a string
 *
 * @c: occurance of a char
 * @s: in a string
 *
 * Return: pointer to first occurance of character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
