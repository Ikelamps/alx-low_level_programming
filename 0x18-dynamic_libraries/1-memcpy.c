#include "main.h"

/**
 * _memcpy - function copies @n bytes from the memory area
 * @src to memory area @dest
 *
 * @n: function copies
 * @src: cource or bytes from memry are
 * @dest: destination or to memory are
 *Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
