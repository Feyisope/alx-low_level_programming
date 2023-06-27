#include "main.h"

/**
 * puts_half - prints second half of the string
 *
 * @str:parameter used
 * Return: return the value of str
 **/
void puts_half(char *str)
{
	int a, j, leng;

	leng = 0;

	for (a = 0; str[a] != '\0'; a++)
		leng++;

	j = (leng / 2);

	if ((leng % 2) == 1)
		j = ((leng + 1) / 2);

	for (a = j; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');

}
