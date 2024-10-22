#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Print the lowercase alphabet */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	/* Print a new line */
	putchar('\n');

	return (0);
}
