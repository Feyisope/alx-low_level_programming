#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - reallocate memory block
  * @ptr: ...
  * @old_size: ...
  * @new_size: ...
  *
  * Return: ...
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
			return (NULL);

		return (newptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		newptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (newptr);
}
