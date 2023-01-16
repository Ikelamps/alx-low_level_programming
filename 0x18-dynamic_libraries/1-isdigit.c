#include "main.h"

/**
 * _isdigit - wite a function that check for digit (0 thr 9)
 * @c: char to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;

	return (y);
}
