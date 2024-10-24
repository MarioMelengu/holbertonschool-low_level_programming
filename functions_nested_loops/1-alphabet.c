#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)  // Loop through letters a to z
    {
        _putchar(letter);  // Print each letter
    }
    _putchar('\n');  // Print a new line
}