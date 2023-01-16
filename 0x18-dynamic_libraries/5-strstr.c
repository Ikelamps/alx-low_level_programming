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
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (0);
}
