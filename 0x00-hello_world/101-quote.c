#include <unistd.h>

/**
 * Description: main - prints out the stdout
 * Return: 1 if successful
 */
int main(void)
{
	char Str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, Str1, 59);
	return (1);
}
