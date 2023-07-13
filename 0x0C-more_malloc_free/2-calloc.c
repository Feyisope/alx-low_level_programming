#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocate memory to an aray
  * @nmemb: number of members
  * @size: size
  *
  * Return: pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	j = malloc(l);

	if (j == NULL)
		return (NULL);

	while (i < l)
	{
		j[i] = 0;
		i++;
	}

	return (j);
}
