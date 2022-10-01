#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: this is the input string
 *
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
