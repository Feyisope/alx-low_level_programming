#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: address of memory to fill
 * @b: second input
 * @n:  unsigned integer
 * Return: returns pointer to memory x
 **/
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
