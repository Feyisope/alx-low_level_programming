#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - convert the params passed to the program to string
  * @ac: Argu count
  * @av: Argu vector
  *
  * Return: ...
  */
char *argstostr(int ac, char **av)
{
	int p = 0, a = 0, b = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		while (av[a][b])
		{
			p++;
			b++;
		}

		b = 0;
		a++;
	}

	s = malloc((sizeof(char) * p) + ac + 1);

	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			s[c] = av[a][b];
			c++;
			b++;
		}

		s[c] = '\n';

		b = 0;
		c++;
		a++;
	}

	c++;
	s[c] = '\0';
	return (s);
}
