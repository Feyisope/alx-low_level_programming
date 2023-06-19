#include <stdio.h>

/**
 * main -print alphabets in lower except q and e
 *
 * Return: Always 0 (Sucess)
 *
 */
int main(void)

{
	char ch, e, q;

	e = 'e';
	q = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != e && ch != q)
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
