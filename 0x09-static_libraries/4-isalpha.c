#include "main.h"

/**
 * _isalpha - shows 1 if input is a character
 * other cases shows 0
 * @c: character for ascii
 * Return: 1 for letter ,0 for rest
 **/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 96))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
