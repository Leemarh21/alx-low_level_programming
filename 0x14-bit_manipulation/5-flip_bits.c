#include "main.h"

/**
 * flip_bits - returns the number of bits you would need 
 * @n: number one
 * @m: number two
 *
 * Return: number of bits
 */
unisgned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
