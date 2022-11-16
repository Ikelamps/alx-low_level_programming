#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - gives sum of two int
 * @a: int 1
 * @b: int 2
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gives differnce of two int
 * @a: int 1
 * @b: int 2
 * Return: Diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - gives product of a and b
 * @a: int 1
 * @b: int 2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - gives the div of two int
 * @a: int 1
 * @b: int 2
 * Return: answer to a div b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - give remainder of div of two int
 * @a: int 1
 * @b: int 2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
