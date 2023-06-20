#include "main.h"

/**
 *_islower - show that it is lower
 *
 *@c: character in ascii mode
 *
 * Return:1 for lowercase.0 for rest
 **/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		{
			return (1);
		}
	else
	{
		return (0);
	}
	_putchar('\n');
}
