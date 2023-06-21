#include "main.h"

/**
 * _abs - find absolute value of an integer.
 *
 * @k: integer to return value
 * Return: returns 0
 **/
int _abs(int k)
{
	if (k <= 0)
	{
		return (k);
	}
	else
	{
		return (k * -1);
	}
}
