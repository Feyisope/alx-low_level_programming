#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of positive numbers
  * @argc: ****
  * @argv: ****
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *m;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			m = argv[i];

			for (j = 0; j < strlen(m); j++)
			{
				if (m[j] < 48 || m[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(m);
			m++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
