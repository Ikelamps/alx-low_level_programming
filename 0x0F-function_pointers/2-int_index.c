#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array to search
 * @size: array size
 * @cmp: compare function
 * Return: index of firdt element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
