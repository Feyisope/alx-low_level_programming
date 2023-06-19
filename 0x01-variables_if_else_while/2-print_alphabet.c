#include <stdio.h>

/**
 * main - print aphabets in lowercase
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
putchar('\n');
return (0);
}
