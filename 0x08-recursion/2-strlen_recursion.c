#include "main.h"

/**
 * _strlen_recursion - returns lenght of a string
 *
 * @s: input parameter
 * Return: return an integer
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);

}
