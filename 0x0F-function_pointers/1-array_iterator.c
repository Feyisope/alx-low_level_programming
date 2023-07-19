#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function on array element
 * @array: array
 * @size: no of elements to print
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}

