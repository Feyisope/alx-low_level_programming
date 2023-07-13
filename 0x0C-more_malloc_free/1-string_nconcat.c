#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: parameter 1
  * @s2: parameter
  * @n:  no of bytes
  *
  * Return: null if fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *strn;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	strn = malloc(sizeof(char) * l + 1);
	if (strn == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			strn[j] = s1[j];

		if (j >= i)
		{
			strn[j] = s2[k];
			k++;
		}
		j++;
	}
	strn[j] = '\0';
	return (strn);
}
