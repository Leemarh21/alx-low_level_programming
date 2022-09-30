#include <stdio.h>
/**
 * main - write a program that prints the number of arguments
 *
 * @args: argument count
 * @argv: argument vector
 *
 * Return: returns 0
 *
 */
int main(int args, char **argv)
{
	(void)argv;
	printf("%d\n", args - 1);
	return (0);
}
