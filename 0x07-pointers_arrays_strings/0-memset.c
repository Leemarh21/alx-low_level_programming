#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @c
 * @s: A pointer to te memory area to be filled.
 * @c: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * description _memset: over there
 *
 * Return: A pointer to be filed by memory area @s
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = c;
		i++;
	}
	return (s);
}
