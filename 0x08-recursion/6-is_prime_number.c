#include "main.h"
#include <stdio.h>

int actu_prime(int n, int i);
/**
 * is_prime_number - return prime number
 *
 * @n: input parameter
 * Return: return the value integer n
 **/
int is_prime_number(int n)
{
	{
	return (actu_prime(n, 1));
	}
}
/**
 * actu_prime - calculate prime number
 *
 * @n: input parameter
 * @i: iterate number
 * Return: return the value integer n
 **/
int actu_prime(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actu_prime(n, i - 1));

}
