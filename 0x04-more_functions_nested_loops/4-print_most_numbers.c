#include "main.h"

/**
 * print_most_numbers - print nos from 0 -9 exluding 2 and 4.
 *
 * Return: return o
 *
 **/
void print_most_numbers(void)
{
	int i;

		for (i = 0; i <= 9; i++)
		{
			if (i == 2 || i == 4)
				continue;
			_putchar(i + 48);
		}
	_putchar('\n');
}
