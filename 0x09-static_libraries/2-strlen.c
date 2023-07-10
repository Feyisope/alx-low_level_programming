#include "main.h"

/**
 * _strlen - Return the lenght of a string
 *
 * @s: character to pass
 * Return: return the value of _strlen
 **/
int _strlen(char *s)
{
	int lengt_str = 0;

	while (*s != '\0')
	{
	lengt_str = lengt_str + 1;
		s++;
	}
	return (lengt_str);
}
