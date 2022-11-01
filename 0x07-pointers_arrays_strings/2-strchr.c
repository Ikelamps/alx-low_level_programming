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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
