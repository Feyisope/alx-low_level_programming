#include "main.h"

/**
 * _puts - print a string
 *
 * @str: paramater passed
 * Return: return 0
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
