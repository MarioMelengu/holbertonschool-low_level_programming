#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: pointer to the array
 * @size: size of the two dimensional array
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0, sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
