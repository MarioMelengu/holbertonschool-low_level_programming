#include <stdio.h>
#include "main.h"

/**
* print_array - Prints n elements of an array of integers,
* followed by a new line.
* @a: The array of integers.
* @n: The number of elements to print.
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i != 0)
	{
		printf(", ");
	}
	printf("%d", a[i]);
}
printf("\n");
}
