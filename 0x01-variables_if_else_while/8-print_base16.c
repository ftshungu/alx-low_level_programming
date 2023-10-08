#include <stdio.h>
/**
 * main - Entry point
 * Description: This is the main fucntion of the program.
 * Its prints all the numbers of base 16 in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hd;

	for (hd = '0'; hd <= 'f'; hd++)
	{
		putchar(hd);
	}
	putchar('\n');
	return (0);
}
