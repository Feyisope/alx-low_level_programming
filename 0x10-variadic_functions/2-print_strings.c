#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings.
 * @separator: string to be printed
 * @n: nos of string passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strngs;
	char *str;
	unsigned int mark;

	va_start(strngs, n);

	for (mark = 0; mark < n; mark++)
	{
		str = va_arg(strngs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (mark != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strngs);
}
