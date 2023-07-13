#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - allocates memory using Malloc
  * @b: size to allocate
  *
  * Return: Nothing.
  */
void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);

	if (j == NULL)
		exit(98);

	return (j);
}
