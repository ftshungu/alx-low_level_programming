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

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 9 || j != 9)
			{
				putchar(',');
				if (i != 9 || j != 8)
				{
					putchar(' ');
				}
			}

			if (i == 9 && j == 9)
			{
				putchar('\n');
			}
		}
	}
	return 0;
}
