#include "main.h"
/**
 * print_last_digit - the fucntion will print the last digit of a number
 * @i: fucntion parameter
 * Return: Always k (Success)
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
