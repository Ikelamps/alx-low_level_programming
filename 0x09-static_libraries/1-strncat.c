#include "main.h"

/**
 * _strncat - joins two strings with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: character to be copied
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int q;
	int r;

	q = 0;
	while (dest[q] != '\0')
	{
		q++;
	}
	r = 0;
	while (r < n && src[r] != '\0')
	{
		dest[q] = src[r];
		q++;
		r++;
	}
	dest[q] = '\0';
	return (dest);
}
