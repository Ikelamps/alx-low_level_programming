#include "main.h"

/**
 * _strstr - this locates a substring
 *
 * @haystack: the longer string to search fro
 * @needle: first occurance of the substring
 *
 * Return: a pointer of substring or @NULL if nit found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			j++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
