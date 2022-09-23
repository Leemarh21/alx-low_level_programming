#include "main.h"
/**
 * _strncat - concatenates two strings but add inputed number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: integer parameter to compare index to
 *
 * Return: retuns news concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while(j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
