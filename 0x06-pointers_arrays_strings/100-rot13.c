#include "main.h"

/**
 * rot13 - encodes string into it
 * @s: string to encode
 * Return: address of s
 */
char *rot13(char *s)
{
	int q, r;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (q = 0; *(s + q); q++)
	{
		for (r = 0; r < 52; r++)
		{
			if (a[r] == *(s + q))
			{
				*(s + q) = b[r];
				break;
			}
		}
	}
	return (s);
}
