#include "main.h"
/**
* _isdigit - checks for a digit
* @c: parameter to be checked
* Return: 1 for success and 0 on failure
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
