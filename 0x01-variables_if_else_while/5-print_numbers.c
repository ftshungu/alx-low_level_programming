#include <stdio.h>
/**
 * main - Entry point
 * Description: This is the main fucntion of the program.
 * Its prints all singel digit numbers of base 10 starting from 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d\n", number);
		number++;
	}
	return (0);
}
