#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array name
 * @n: no of elements in the array to be printed
 * Return: input of a and b
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k <(n - 1); k++)
	{
		printf("%d, ", a[k]);
	}
		if (k == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
