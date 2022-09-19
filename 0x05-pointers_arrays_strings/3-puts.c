#include "main.h"

/**
 * _putchar - writes a function that prints a string, followed by a new line, to
 * stdout.
 * 
 * @str: This is my input string 
 */

int _putchar(char c)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	-putchar('\n');
}
