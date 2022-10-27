#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements of array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int q;
	int r;

	for (q = 0; q < n; q++)
	{
		n--;
		r = a[q];
		a[q] = a[n];
		a[n] = r;
	}
}
