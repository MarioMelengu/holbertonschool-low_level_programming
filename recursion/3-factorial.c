#include"main.h"

/**
 * factorial -entry point,return factorial of number
 * @n: -holds value for output
 * Return: (i * factorial(n - 1))
 */

int factorial(int n)
{
	int i;
	
	if(n < 0)
	return (-1);
	else
	return (i * factorial(n - 1));
}
