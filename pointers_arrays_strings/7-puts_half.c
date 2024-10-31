#include "main.h"

/**
 * puts_half -entry point,prints half s
 * @str: -holds value for input
 */

void puts_half(char *str)
{
int i;

for (i = 0; str[i] != ('\0'); i++)
if (i / 5)
_putchar(str[i]);
_putchar('\n');
}
