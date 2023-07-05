#include "main.h"

/**
 * factorial - calculate the factorial of a give number
 *
 * @n: input number
 * Return: return the value integer n
 **/
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n <= 1)
	return (1);
	return (n * factorial(n - 1));
}
