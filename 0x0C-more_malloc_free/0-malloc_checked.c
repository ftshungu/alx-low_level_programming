#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function allocates memory using malloc
 * @b: size of memory
 * Return: NULL
 */
void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
