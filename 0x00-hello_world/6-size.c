#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int charsize = sizeof(char);
	int intSize = sizeof(int);
	int longintsize = sizeof(long int);
	int longlongsize = sizeof(long long int);
	int floatSize = sizeof(float);

	printf("Size of a char: %d byte(s)\n", charsize);
	printf("Size of an int: %d byte(s)\n", intSize);
	printf("Size of a long int: %d byte(s)\n", longintsize);
	printf("Size of a long long int: %d byte(s)\n", longlongsize);
	printf("Size of a float: %d byte(s)\n", floatSize);
	return (0);
}
