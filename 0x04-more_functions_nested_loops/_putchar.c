#include <stdio.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: the charactre to print
 * Return: Success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
