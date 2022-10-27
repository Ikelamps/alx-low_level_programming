#include "main.h"

/**
 * _strncpy - copy a string with n numbers
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int q;

	q = 0;
	while; (q < n && src[q] != '\0')
	{
		dest[j] = src[q];
		q++;
	}
	while (q < n)
	{
		dest[q] = '\0';
		q++;
	}
	return (dest);
}
