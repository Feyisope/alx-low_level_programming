#include "main.h"
#include <stdlib.h>

/**
 * str_concat - cocatenate two strings & allocate memory
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, counti;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	i = counti = 0;
	while (s1[i] != '\0')
	i++;
	while (s2[counti] != '\0')
	counti++;
	conct = malloc(sizeof(char) * (i + counti + 1));
	if (conct == NULL)
	return (NULL);
	i = counti = 0;

	while (s1[i] != '\0')
	{
	conct[i] = s1[i];
	i++;
	}
	while (s2[counti] != '\0')
	{
	conct[i] = s2[counti];
	i++, counti++;
	}
	conct[i] = '\0';
	return (conct);
}
