#include "main.h"
/**
 * print_alphabet_x10 - function to print the alphabet on a new row 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i  < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
