#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: character to search in s
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
