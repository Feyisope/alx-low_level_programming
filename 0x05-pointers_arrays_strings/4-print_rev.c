#include "main.h"

/**
 * print_rev - print numbers in reverse numbers
 *
 * @s: parameter passed
 * Return: return 0
 **/
void print_rev(char *s)
{
	int m;
	int len = 0;

	while (*s != 0)
	{
	len++;
	s++;
	}
	s--;
	for (m = 0; m > 0; m++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
