#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - ...
  * @width: ...
  * @height: ...
  *
  * Return: ...
  */

int **alloc_grid(int width, int height)
{
	int l, m, n, o;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (l = 0; l < height; l++)
	{
		a[l] = malloc(sizeof(int) * width);

		if (a[l] == NULL)
		{
			for (m = l; m >= 0; m--)
			{
				free(a[m]);
			}

			free(a);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (o = 0; o < width; o++)
		{
			a[n][o] = 0;
		}
	}

	return (a);
}
