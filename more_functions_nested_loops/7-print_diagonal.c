#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: This function prints a diagonal line using the '\' character.
 * If the value of n is 0 or less, it only prints a newline
 * character.
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i;
for (i = 0; i < n; i++)
{
_putchar ('\\');
}
}
_putchar ('\n');
}
