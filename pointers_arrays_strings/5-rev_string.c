#include "main.h"
/**
*rev_string - reverses a string.
*@s: points to a value
*/
void rev_string(char *s)
{
    int i;
	int last_index = -1;

	if (s[0] == '\0')
	{
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		last_index = i;
	}
	for (i = last_index; i >= 0; i--)
}
