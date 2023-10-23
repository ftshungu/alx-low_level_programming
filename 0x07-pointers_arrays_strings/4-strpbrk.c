#include "main.h"
/**
 * _strpbrk - function searches a string for any set of bytes
 * @s: the string
 * @accept: string to search in s
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
