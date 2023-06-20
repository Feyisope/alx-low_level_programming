#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10times
 *
 * Return: void
 **/
void print_alphabet_x10(void)
{
	int n;
	int k;

	for (n = 1; n <= 10; n++)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
