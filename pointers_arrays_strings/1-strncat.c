#include"main.h"

/**
 * _strncat -entry point,conc two strings
 * @dest: -holds value for input
 * @src: -holds value for input
 * @n: -holds value for input
 * Return: (ptr)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
