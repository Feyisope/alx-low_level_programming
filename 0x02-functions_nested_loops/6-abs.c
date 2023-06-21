#include "main.h"

/**
 * _abs - find absolute value of an integer.
 *
 * @k: integer to return value
 * Return: returns 0
 **/
int _abs(int k)
{
	if (k < 0)
	{
		int abs_val;

		abs_val = k * -1;
		return (abs_val);
	}
	return (k);
}
