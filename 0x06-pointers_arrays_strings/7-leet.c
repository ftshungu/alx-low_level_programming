#include "main.h"
/**
 * leet - encodes a string using the leet encoding
 * @s: string to be encoded
 * Return: encoided string
 */
char *leet(char *s)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; s[i] != '\n' ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
