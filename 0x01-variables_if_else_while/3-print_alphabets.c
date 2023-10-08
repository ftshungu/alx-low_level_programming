#include <stdio.h>
/**
 * main - Entry point
 * Description: This is the main fucntion of the program.
 * It prints the alphabest in uppercase and lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
