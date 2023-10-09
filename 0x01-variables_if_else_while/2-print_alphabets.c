#include <stdio.h>
/**
 * main - Entry point.
 * Description: the code will output the letters of the alphabet in lowercase.
 * Return: always 0 (Success).
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
