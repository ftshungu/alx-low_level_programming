#include <stdio.h>
/**
 * main - Entry point
 * Description: This is the main fucntion of the program.
 * Its prints all the numbers of base 16 in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = i; j <= 10; j++)
		{
			putchar(i * 10 + j + '0');

			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
