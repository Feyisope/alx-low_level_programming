#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: argument 1 passed
 * @f:argument 2 passed
 * Return: zero
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
