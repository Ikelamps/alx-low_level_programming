#include "main.h"

/**
 * _pow_recursion - value of x to power of y
 * @x: value
 * @y: power
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
