#include "main.h"

/**
 * flip_bits - gives number of bits to be flipped
 * @m: The number to flip n to.
 * @n: number itself
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m, bits = 0;

	while (num > 0)
	{
		bits += (num & 1);
		num >>= 1;
	}
	return (bits);
}
