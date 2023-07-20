#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all paramters.
 * @n: no of arguments passed to the function.
 * @...: variable no of paramters to calc the sum
 *
 * Return: returns the sum of all parameters else 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ca;
	unsigned int j, sum = 0;

	va_start(ca, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ca, int);

	va_end(ca);

	return (sum);
}
