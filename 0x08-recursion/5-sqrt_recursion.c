#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (n <= 0)
		return (-1);
	else if (sqrt > n)
		return (i);
	else if	(sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
