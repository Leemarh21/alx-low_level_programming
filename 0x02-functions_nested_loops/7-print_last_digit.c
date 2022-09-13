#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number in question
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln* -1;
	_putchar(ln + '0');
	return (ln);
}
