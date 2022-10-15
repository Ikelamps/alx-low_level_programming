#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign random number each time
 * print last digit of number in var n
 * Return: Always 0 (Bingo)
 */
int main(void)
{
	int n;
	int w;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	w = n % 10;
	printf("Last digit of %d is %d", n, w);
	if (w > 5)
	{
		printf("and is greater than 5");
	}
	if (w == 0)
	{
		printf("and is 0");
	}
	if (w < 6 && w != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
