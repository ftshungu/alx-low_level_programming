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

	for (hd = 0; hd < 16; hd++)
	{
		putchar(hd < 10 ? hd + '0' : hd + 'a' - 10);
	}
	putchar('\n');
	return (0);
}
