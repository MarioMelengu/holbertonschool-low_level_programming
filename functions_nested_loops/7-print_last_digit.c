#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int ld;
ld = n % 10;
if (n >= 0)
{
_putchar ('0' + ld);
return (ld);
}
else
{
_putchar ('0' + -ld);
return (-ld);
}
}
