#include "main.h"

/**
 * _memset - function fills the first @n bytes of memory pointed
 * to by @s wiyh the constant byte @b
 *
 * @n: bytes of thememory area pointed to by @s
 * @s: with constant byte @b
 * @b: memory area pointer
 *
 * Return: pointer to memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
