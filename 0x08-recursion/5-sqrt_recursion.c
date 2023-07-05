#include "main.h"
#include <stdio.h>

int actu_sqrt(int n, int i);
/**
 * _sqrt_recursion - return natural sqyare root
 *
 * @n: input parameter
 * Return: return the value integer n
 **/
int _sqrt_recursion(int n)
{
	{
	return (actu_sqrt(n, 1));
	}
}
/**
 * actu_sqrt - calculate natural sqyare root
 *
 * @n: input parameter
 * @i: iterate number
 * Return: return the value integer n
 **/
int actu_sqrt(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
		return (i);
	return (actu_sqrt(n, i + 1));

}
