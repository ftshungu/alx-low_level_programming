#include "main.h"
/**
 * _strstr - function locates a substring
 * @haystack: the pointer to the string
 * @needle: pointer to the substring
 * Return: substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
