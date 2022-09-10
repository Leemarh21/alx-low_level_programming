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
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > i)
	                {

				putchar(i + '0');
				putchar(j + '0');

				if (i != 8)
                                {

				putchar(',');
				putchar(' ');
				
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
