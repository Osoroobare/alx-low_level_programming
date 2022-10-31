#include "main.h"

/**
 * clear_bit - it sets value of a bit to a given index to 0.
 * @index: index to set the value at - indices start at 0.
 * @n: A pointer to the bit
 * Return: If an error occurs - -1.
 * else - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
