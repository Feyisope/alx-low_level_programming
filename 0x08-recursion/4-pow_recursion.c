#include "main.h"

/**
 * _pow_recursion - raise powr of x to y
 *
 * @x: input number 1
 * @y: input number 2
 * Return: return the value integer y
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y  == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
