#include "main.h"

/**
 * print_line - draw a straight line in terminal
 *
 * @n: character used.
 * Return: return the value of n
 **/
void print_line(int n)
{
	int prlin;

	if (n <= 0)
	{
		_putchar('n');
	}
	else
	{
		for (prlin = 0; prlin < n; prlin++)
		{
			_putchar(95);
		}
		_putchar('\n');
		}

}
