#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes with a character
 * @size: size of int
 * @c: the character
 * Return: NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
