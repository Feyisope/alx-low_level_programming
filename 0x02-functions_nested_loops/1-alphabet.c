#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 *Description - to print alphabet
 *@parameter - void print_alphabet(void)
 *
 * Return: void
 *
 * print_alphabet - call _putchar
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
