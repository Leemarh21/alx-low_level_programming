#include "main.h"
#include <stdio.h>

/**
 * _isdigit - return 1 if parameter is a digit or not
 * @c: the character to check
 * Return: 0 (failure)
 */

int _isdigit(int c)
{

	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
