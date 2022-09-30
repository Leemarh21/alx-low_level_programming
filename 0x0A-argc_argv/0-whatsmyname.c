#include <stdio.h>

/**
 * main - write a program that prints its name, followed by a new line
 * if you rename the program, it will print the new nae, without having to
 * compile it again
 * You should not remove the path before the name of the program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
