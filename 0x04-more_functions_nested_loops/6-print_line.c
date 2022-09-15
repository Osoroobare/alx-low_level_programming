#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ is printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int line;

		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

