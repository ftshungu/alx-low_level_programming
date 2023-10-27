#include "main.h"
#include <stdio.h>
/**
 * _isupper - will check for uppercase characters
 * @c: function parameter
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
