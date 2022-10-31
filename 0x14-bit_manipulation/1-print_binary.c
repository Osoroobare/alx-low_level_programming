#include "main.h"

/**
 * print_binary - Prints the number in binary
 * @num: The binary number to be printed
 */
void print_binary(unsigned long int num)
{
	if (num > 1)
		print_binary(num >> 1);
	_putchar((num & 1) + '0');
}
