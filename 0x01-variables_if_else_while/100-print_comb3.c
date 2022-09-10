#include <stdio.h>
/**
 * main - entry point
 *
 * codes for printing all possible combination of d/t digits
 * in ascending order and separated by a comma followed by a space
 *
 * Return: 0 Success
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = 1; digit2 < 10; digit2++)
		{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');

				if (digit1 == 7 && digit2 == 8)
					continue;

				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
