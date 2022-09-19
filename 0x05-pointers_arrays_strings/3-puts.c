#include "main.h"

/**
 * _putchar - writes a function that prints a string, followed by a new line, to
 * stdout.
 * @str: This is my input string
 * Return: string 
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	-putchar('\n');
}
