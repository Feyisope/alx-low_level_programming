#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers.
 * @separator: string to print between numbers.
 * @n: integers passed
 * @...: variable of nos to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nos;
	unsigned int mark;

	va_start(nos, n);

	for (mark = 0; mark < n; mark++)
	{
		printf("%d", va_arg(nos, int));

		if (mark != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nos);
}

